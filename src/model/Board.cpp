#include <assert.h>
#include <model/Board.h>
#include <iostream>
namespace model {

Board::Board(CardList& cardlist) {
	decks[DECK] = std::make_shared<Deck>(cardlist);
	decks[WASTE] = std::make_shared<Deck>();
	for (int i = 1; i <= FOUNDATIONS_SIZE; ++i) {
		std::string str = "f" + std::to_string(i);
		foundations[str] = std::make_shared<FoundationStack>();
	}
	for (int i = 1; i <= TABLEAUS_SIZE; ++i) {
		std::string str = "t" + std::to_string(i);
		tableaus[str] = std::make_shared<TableauStack>();
	}
}

Board::~Board() {
}

void Board::initBoard() {
	decks[DECK]->shuffle();
	for (int i = 1; i <= TABLEAUS_SIZE; ++i) {
		for (int j = 1; j <= i; j++) {
			std::string str = "t" + std::to_string(i);
			tableaus[str]->initPush(getDeckCard());
			decks[DECK]->pop();
		}
	}
	decks[DECK]->setAvailableCardVisibility(true);
}

void Board::push(std::string target, Card& card) {
	if (isTableauKey(target)) {
		tableaus[target]->push(card);
	} else if (isFoundationKey(target)) {
		foundations[target]->push(card);
	}
}

void Board::pushListToTableau(std::string target, CardList cardlist) {
	tableaus[target]->pushList(cardlist);
}

void Board::pop(std::string target) {
	if (isTableauKey(target)) {
		tableaus[target]->pop();
	} else if (isFoundationKey(target)) {
		foundations[target]->pop();
	} else if (isDeckKey(target)) {
		decks[target]->pop();
	}
}

void Board::popList(std::string target, int length) {
	tableaus[target]->popList(length);
}

Card& Board::getCard(std::string target) {
	assert(isTableauKey(target) || isFoundationKey(target));
	if (isTableauKey(target)) {
		return tableaus[target]->getCard();
	}
	return foundations[target]->getCard();
}

const CardList Board::getListOfCards(std::string target, int length) {
	assert(isTableauKey(target));
	return tableaus[target]->getListOfCards(length);
}

int Board::getFinishedFoundations() {
	int sum = 0;
	for (const auto& entry : foundations) {
		if (entry.second->isFull()) {
			sum++;
		}
	}
	return sum;
}

bool Board::areAllFundationsFinished() {
	return getFinishedFoundations() == FOUNDATIONS_SIZE;
}

Card& Board::getDeckCard() {
	return decks[DECK]->getCard();
}

void Board::turnDeckCard() {
	push("d2", decks[DECK]->getCard());
	decks[DECK]->turnCard();
}

bool Board::isTableauFullOfInvisible(std::string target) {
	return tableaus[target]->isFullOfInvisible();
}

void Board::showNewTableauCard(std::string target) {
	assert(isTableauKey(target));
	assert(!tableaus[target]->isEmpty());
	tableaus[target]->switchONvisibility();
}

void Board::restoreDeck() {
	assert(!decks[WASTE]->isEmpty());
	do {
		decks[DECK]->push(decks[WASTE]->getCard());
		decks[WASTE]->pop();
	} while (!decks[WASTE]->isEmpty());
}

bool Board::isTableauKey(std::string target) {
	toLowerCase(target);
	return target.find("t") != std::string::npos;
}

bool Board::isFoundationKey(std::string target) {
	toLowerCase(target);
	return target.find("f") != std::string::npos;
}

bool Board::isDeckKey(std::string target) {
	toLowerCase(target);
	return target.find("d") != std::string::npos;
}

bool Board::isDeckEmpty() {
	return decks[DECK]->isEmpty();
}

void Board::toLowerCase(std::string& target) {
	std::transform(target.begin(), target.end(), target.begin(), ::tolower);
}

void Board::clear() {
	restoreDeck();
	restoreTableau();
	restoreFoundation();
	decks[DECK]->shuffle();
}

void Board::restoreTableau() {
	for (auto& entry : tableaus) {
		std::shared_ptr<TableauStack> tableau = entry.second;
		do {
			decks[DECK]->push(tableau->getCard());
			tableau->pop();
		} while (!tableau->isEmpty());
	}
}
void Board::restoreFoundation() {
	for (auto& entry : foundations) {
		std::shared_ptr<FoundationStack> foundation = entry.second;
		do {
			decks[DECK]->push(foundation->getCard());
			foundation->pop();
		} while (!foundation->isEmpty());
	}
}


const int Board::getDeckSize() {
	return decks[DECK]->size();
}

const std::map<std::string, std::shared_ptr<Deck>>& Board::getDecks() const {
	return decks;
}

const std::map<std::string, std::shared_ptr<FoundationStack>>& Board::getFoundations() const {
	return foundations;
}

const std::map<std::string, std::shared_ptr<TableauStack>>& Board::getTableaus() const {
	return tableaus;
}

} /* namespace model */
