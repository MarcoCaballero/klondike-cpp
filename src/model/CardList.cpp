#include <model/CardList.h>

namespace model {

CardList::CardList() {
}

CardList::CardList(std::vector<Card> cards) :
		cards(cards) {
}

CardList::~CardList() {
}

Card& CardList::getCard() {
	return cards.front();
}

Card& CardList::getCard(int pos) {
	return cards[pos];
}

CardList CardList::getListOfCards(int length) {
	CardList sublist = CardList();
	for (int i = 0; i < length; ++i) {
		sublist.push(cards.at(i));
	}
	return sublist;
}

void CardList::setVisible(int pos, bool visibility) {
	getCard(pos).setVisibility(visibility);
}

void CardList::pop() {
	cards.erase(cards.begin());
}

void CardList::popList(int length) {
	cards.erase(cards.begin(), cards.begin() + length);
}

int CardList::size() {
	return cards.size();
}

bool CardList::isEmpty() {
	return cards.empty();
}

bool CardList::isFull(int maxLength) {
	return size() == maxLength;
}

bool CardList::isFullOfInvisible() {
	bool isFullOf = true;
	for (auto &card : cards) // access by reference to avoid copying
	{
		if (card.isVisible() == true) {
			isFullOf = false;
		}
	}
	return isFullOf;
}

void CardList::push(Card card) {
	cards.insert(cards.begin(), card);
}

void CardList::pushBack(Card card) {
	cards.push_back(card);
}
} /* namespace model */
