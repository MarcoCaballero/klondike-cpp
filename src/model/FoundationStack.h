#ifndef SRC_MODEL_FOUNDATIONSTACK_H_
#define SRC_MODEL_FOUNDATIONSTACK_H_

#include <model/Stack.h>

namespace model {

class FoundationStack: public Stack {
public:
	FoundationStack();
	virtual ~FoundationStack();
	void setVisible(int pos, bool visibility);
	void setSuit(int suit);
	const int getSuit();
	bool isAllowedPush(Card card);
private:
	int suit;

	const bool checkSuit(int suit);
	const bool checkValue(int value);
};

} /* namespace model */

#endif /* SRC_MODEL_FOUNDATIONSTACK_H_ */
