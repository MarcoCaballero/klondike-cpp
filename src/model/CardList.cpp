#include <assert.h>
#include <model/CardList.h>

namespace model {

CardList::CardList(){

}

CardList::CardList(std::vector<Card> & cards) :
		cards(cards) {

}

CardList::CardList(const CardList & cardlist) :
		cards(cardlist.cards) {

}

CardList::~CardList(){

}

Card & CardList::getCard() {

	assert(!isEmpty());
	return cards.front();
}

Card & CardList::getCard(int pos) {

	assert(!isEmpty());
	return cards[pos];
}

std::vector<Card> & CardList::getCards() {

	return this->cards;
}

const CardList CardList::getListOfCards(int length) {

	assert(!isEmpty());
	CardList sublist = CardList();
	for (int i = 0; i < length; ++i) {
		sublist.push(cards.at(i));
	}
	return sublist;
}

void CardList::setVisible(int pos, bool visibility) {

	assert(!isEmpty());
	assert(pos < size());
	getCard(pos).setVisibility(visibility);
}

void CardList::pop() {

	assert(!isEmpty());
	cards.erase(cards.begin());
}

void CardList::popList(int length) {

	assert(!isEmpty());
	assert(length <= size());
	cards.erase(cards.begin(), cards.begin() + length);
}

const int CardList::size() {

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

void CardList::push(const Card & card) {

	this->cards.insert(cards.begin(), card);
}

void CardList::pushBack(const Card & card) {

	this->cards.push_back(card);
}

void CardList::pushList(std::vector<Card> & cards) {

	cards.insert(this->cards.begin(), cards.begin(), cards.end());
}


} // namespace model
