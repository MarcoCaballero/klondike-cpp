#include <model/Deck.h>
#include <random>
#include <algorithm>

namespace model {

Deck::Deck() {

	this->cards = CardList();
}

Deck::Deck(CardList& cards) {

	this->cards = CardList(cards);
}

Deck::~Deck() {

}

Card & Deck::getCard() {

	return cards.getCard();
}

void Deck::setAvailableCardVisibility(bool visibility) {
	getCard().setVisibility(visibility);
}

void Deck::pop() {

	cards.pop();
}

const int Deck::size() {

	return cards.size();
}

const bool Deck::isEmpty() {

	return cards.isEmpty();
}

const bool Deck::isFull(int maxLength) {

	return cards.isFull(maxLength);
}

const bool Deck::isFullOfInvisible() {

	return cards.isFullOfInvisible();
}

void Deck::push(const Card & card) {
	cards.pushBack(card);
}

void Deck::turnCard() {

	cards.getCard().setVisibility(false);
	cards.pop();
	if (!isEmpty()) {
		cards.getCard().setVisibility(true);
	}
}

void Deck::shuffle() {
	auto randomizator = std::default_random_engine { };
	std::shuffle(begin(this->cards.getCards()), end(this->cards.getCards()),
			randomizator);
}

} // namespace model
