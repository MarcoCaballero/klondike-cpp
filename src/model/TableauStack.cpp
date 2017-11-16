#include <assert.h>
#include <model/utils/CardChecker.h>
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

void TableauStack::pushList(CardList& cardlist) {
	if (this->isAllowedPushList(cardlist)) {
		cards.pushList(cardlist.getCards());
	}
}

bool TableauStack::isAllowedPushList(CardList cardlist) {
	return checkList(cardlist);
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
	CardChecker* cardchecker = CardChecker::getInstance();
	if (isEmpty()) {
		return cardchecker->isKing(getCard().getValue());
	} else {
		return getCard().isPreviousValue(value);
	}
}

bool TableauStack::checkList(CardList cardlist) {
	CardChecker* cardchecker = CardChecker::getInstance();
	Card lastCard = cardlist.getCards().back();
	return isAllowedPush(lastCard) && cardchecker->isKing(lastCard.getValue());
}

}
// namespace model
