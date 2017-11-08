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

int Card::getValue() {
	return value;
}

int Card::getSuite() {
	return suite;
}

int Card::getColor() {
	return color;
}

void Card::setColor(int color) {
	this->color = color;
}

bool Card::isVisible() {
	return this->visibility;
}

void Card::setVisibility(bool visibility) {
	this->visibility = visibility;
}

bool Card::isPreviousValue(Card card) {
	return compareValue(card.getValue()) == 1;
}

bool Card::isFollowingValue(Card card) {
	return compareValue(card.getValue()) == -1;
}

bool Card::isEqualSuite(Card card) {
	return this->suite == card.getSuite();
}

bool Card::isEqualColor(Card card) {
	return this->color == card.getColor();
}

int Card::compareValue(int value) {
	return this->value - value;
}

} /* namespace model */
