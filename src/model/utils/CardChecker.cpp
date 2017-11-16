
#include <model/utils/CardChecker.h>

namespace model {
CardChecker* CardChecker::cardChecker = nullptr;

CardChecker* CardChecker::getInstance() {
	if (!cardChecker) {
		cardChecker = new CardChecker();
	}
	return cardChecker;
}

bool CardChecker::isKing(int value) {
	return value == 13;
}
bool CardChecker::isAce(int value) {
	return value == 1;
}

} /* namespace model */
