#include <assert.h>
#include <model/TableauStack.h>

namespace model {

TableauStack::TableauStack() :
		Stack() {

}

TableauStack::~TableauStack() {

}

bool TableauStack::isAllowedPush(Card card) {

	return (checkColor(card.getColor()) && checkValue(card.getValue()));
}

bool TableauStack::isAllowedPushList(CardList cardlist) {
	if (isEmpty()) {
		return cardlist.getCard().getValue() == 13; // Smell code , singleton
	} else {
		return checkList(cardlist);
	}
}

void TableauStack::showAvailableCard() {

	cards.setVisible(0, true);
}

const CardList TableauStack::getListOfCards(int length) {

	return cards.getListOfCards(length);
}

void TableauStack::popList(int length) {
	assert(!isEmpty());
	assert(length <= cards.size());
	int targetsize = cards.size() - length;
	do {
		cards.pop();
	} while (cards.size() < targetsize);
}

bool TableauStack::checkColor(int color) {

	if (isEmpty()) {
		return true;
	} else {
		return !getCard().isEqualColor(color);
	}
}

bool TableauStack::checkValue(int value) {

	if (isEmpty()) {
		return getCard().getValue() == 13; //SMELL CODE DE LA POLLA, singleton
	} else {
		return getCard().isPreviousValue(value);
	}
}

bool TableauStack::checkList(CardList cardlist) {
	Card topCard = cardlist.getCard();
	cardlist.pop();
	Card secondCard = cardlist.getCard();
	return isAllowedPush(topCard) && !checkColor(secondCard.getColor());
}

}
// namespace model
