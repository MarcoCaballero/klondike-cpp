
#include <model/utils/CardChecker.h>

namespace model {
CardChecker* CardChecker::cardChecker = nullptr;

CardChecker* CardChecker::getInstance() {
	if (!cardChecker) {
		cardChecker = new CardChecker();
	}
	return cardChecker;
}

} /* namespace model */
