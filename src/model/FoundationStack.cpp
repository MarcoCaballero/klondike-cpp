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

bool FoundationStack::isAllowedPushList(CardList cardlist) {
	if (isEmpty()) {
		return cardlist.getCard().getValue() == 13; // Smell code , singleton
	} else {
		return isAllowedPushList(cardlist);
	}
}

bool FoundationStack::checkSuit(int suit) {

	return cards.getCard().isEqualSuit(suit);
}

bool FoundationStack::checkValue(int value) {

	return cards.getCard().isFollowingValue(value);
}

bool FoundationStack::checkList(CardList cardlist) {
	Card topCard = cardlist.getCard();
	cardlist.pop();
	Card secondCard = cardlist.getCard();
	return isAllowedPush(topCard) && checkSuit(secondCard.getColor());
}

} // namespace model
