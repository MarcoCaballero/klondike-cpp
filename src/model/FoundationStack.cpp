#include <assert.h>
#include <model/FoundationStack.h>

namespace model {

FoundationStack::FoundationStack() :
		Stack(), suit(0) {

}

FoundationStack::~FoundationStack() {

}

void FoundationStack::setVisible(int pos, bool visibility) {

	cards.setVisible(pos, visibility);
}

void FoundationStack::setSuit(int suit) {
	assert(this->suit == 0);
	this->suit = suit;
}

const int FoundationStack::getSuit() {

	return suit;
}

bool FoundationStack::isAllowedPush(Card card) {

	if (isEmpty()) {
		return true;
	} else {
		return (checkSuit(card.getSuit()) && checkValue(card.getValue()));
	}
}

const bool FoundationStack::checkSuit(int suit) {

	return cards.getCard().isEqualSuit(suit);
}

const bool FoundationStack::checkValue(int value) {

	return cards.getCard().isFollowingValue(value);
}

} // namespace model
