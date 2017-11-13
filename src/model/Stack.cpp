#include <model/Stack.h>

namespace model {

Stack::Stack() :
		cards(CardList()) {
}

Stack::~Stack() {
}

Card & Stack::getCard() {
	return cards.getCard();
}

void Stack::pop() {
	cards.pop();
}

void Stack::switchONvisibility() {
	cards.setVisible(0, true);
}

const int Stack::size() {
	return cards.size();
}

const bool Stack::isEmpty() {
	return cards.isEmpty();
}

const bool Stack::isFull() {
	return cards.isFull(13); // Smell code care
}

const bool Stack::isFullOfInvisible() {
	return cards.isFullOfInvisible(); // Smell code care
}

void Stack::push(const Card & card) {
	if (this->isAllowedPush(card)) {
		cards.push(card);
	}
}

} // namespace model
