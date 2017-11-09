#include <random>
#include <algorithm>
#include <model/CardDeck.h>

namespace model {

CardDeck::CardDeck() {
	this->cards = CardList();
}

CardDeck::CardDeck(CardList cards) {
	this->cards = CardList(cards);
}

CardDeck::~CardDeck() {
}

Card& CardDeck::getCard() {
	return cards.getCard();
}

void CardDeck::setVisible(int pos, bool visibility) {
	cards.setVisible(pos, visibility);
}

void CardDeck::pop() {
	cards.pop();
}

const int CardDeck::size() {
	return cards.size();
}

const bool CardDeck::isEmpty() {
	return cards.isEmpty();
}

const bool CardDeck::isFull(int maxLength) {
	return cards.isFull(maxLength);
}

const bool CardDeck::isFullOfInvisible() {
	return cards.isFullOfInvisible();
}

void CardDeck::push(const Card& card) {
	cards.push(card);
}

void CardDeck::turnCard() {
	cards.getCard().setVisibility(false);
	cards.pop();
	cards.getCard().setVisibility(true);
}

void CardDeck::shuffle() {
	auto randomizator = std::default_random_engine {};
	std::shuffle(begin(this->cards.getCards()), end(this->cards.getCards()), randomizator);
}

} /* namespace model */
