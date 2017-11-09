
#include "TableauStack.h"
#include "Card.h"
#include "CardList.h"

namespace model {

TableauStack::TableauStack() :
		Stack() {


}

TableauStack::~TableauStack(){

}

bool TableauStack::isAllowedPush(Card card) {

	return (checkColor(card.getColor()) && checkValue(card.getValue()));
}

void TableauStack::showAvailableCard() {

	cards.setVisible(0, true);
}

const CardList TableauStack::getListOfCards(int length) {

	return cards.getListOfCards(length);
}

void TableauStack::pushList(CardList & cardlist) {

	cards.pushList(cardlist.getCards());
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
		return getCard().getValue() == 13; //SMELL CODE DE LA POLLA
	} else {
		return getCard().isPreviousValue(value);
	}
}


} // namespace model
