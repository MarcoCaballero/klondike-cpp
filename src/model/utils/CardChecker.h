#ifndef SRC_MODEL_UTILS_CARDCHECKER_H_
#define SRC_MODEL_UTILS_CARDCHECKER_H_

namespace model {

class CardChecker {
public:
	static CardChecker* getInstance();
	bool isKing();
	bool isAce();
private:
	static CardChecker* cardChecker;
	CardChecker() {}
	CardChecker(CardChecker const&){};
	CardChecker& operator=(CardChecker const&);
};

} /* namespace model */

#endif /* SRC_MODEL_UTILS_CARDCHECKER_H_ */
