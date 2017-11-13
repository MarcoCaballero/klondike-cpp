#include <model/Game.h>

namespace model {

Game::Game() {
	state = State::INITIAL;
}

Game::~Game() {
}

bool Game::isFinished() {
	return state == State::FINAL;
}

bool Game::isCompleteFoundations() {
	return board->areAllFundationsFinished();
}
void Game::clear() {
	board->clear();
}

void Game::initGame() {
	CardList cardlist;
	for (int i = 1; i <= 13; ++i) {
		for (int j = 1; j <= 4; ++j) {
			Card card = Card(i, j, j % 2);
			cardlist.pushBack(card);
		}
	}
	board = std::make_shared<Board>(cardlist);
	board->initBoard();
}

void Game::move(std::string origin, std::string target) {
	Card& cardToMove = board->getCard(origin);
	board->push(target, cardToMove);
	board->pop(origin);
}

void Game::move(std::string origin, std::string target, int length) {
	const CardList listToMove = board->getListOfCards(origin, length);
	board->pushListToTableau(target, listToMove);
	board->popList(origin, length);
}

void Game::showNewDeckCard() {
	board->turnDeckCard();
}

State& Game::getState() {
	return state;
}

void Game::setState(State state) {
	this->state = state;
}

std::shared_ptr<Board> Game::getBoard() {
	return board;
}

} /* namespace model */
