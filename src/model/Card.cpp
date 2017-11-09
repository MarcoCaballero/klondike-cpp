#include <model/Card.h>

namespace model {

Card::Card(int value, int suite, int color) {
	this->value = value;
	this->suite = suite;
	this->color = color;
	this->visibility = false;
}

Card::~Card() {
}

const int Card::getValue() {
	return value;
}

const int Card::getSuite() {
	return suite;
}

const int Card::getColor() {
	return color;
}

void Card::setColor(int color) {
	this->color = color;
}

const bool Card::isVisible() {
	return this->visibility;
}

void Card::setVisibility(bool visibility) {
	this->visibility = visibility;
}

const bool Card::isPreviousValue(Card card) {
	return compareValue(card.getValue()) == 1;
}

const bool Card::isFollowingValue(Card card) {
	return compareValue(card.getValue()) == -1;
}

const bool Card::isEqualSuite(Card card) {
	return this->suite == card.getSuite();
}

const bool Card::isEqualColor(Card card) {
	return this->color == card.getColor();
}

int Card::compareValue(int value) {
	return this->value - value;
}

} /* namespace model */
