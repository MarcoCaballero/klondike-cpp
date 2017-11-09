#include <model/Card.h>

namespace model {

Card::Card(int value, int suit, int color) {
	this->value = value;
	this->suit = suit;
	this->color = color;
	this->visibility = false;
}

Card::~Card() {
}

const int Card::getValue() {
	return value;
}

const int Card::getSuit() {
	return suit;
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

const bool Card::isPreviousValue(int value) {
	return compareValue(value) == 1;
}

const bool Card::isFollowingValue(int value) {
	return compareValue(value) == -1;
}

const bool Card::isEqualSuit(int suit) {
	return this->suit == suit;
}

const bool Card::isEqualColor(int color) {
	return this->color == color;
}

int Card::compareValue(int value) {
	return this->value - value;
}

} /* namespace model */
