#ifndef MODEL_FOUNDATIONSTACK_H
#define MODEL_FOUNDATIONSTACK_H

#include <model/Stack.h>

namespace model {

class FoundationStack: public Stack {
public:
	FoundationStack();

	virtual ~FoundationStack();

	void setVisible(int pos, bool visibility);

	bool isAllowedPushList(CardList cardlist);

	void setSuit(int suit);

	const int getSuit();

	bool isAllowedPush(Card card);

private:
	int suit;

	bool checkSuit(int suit);

	bool checkValue(int value);

	bool checkList(CardList cardlist);

};

} // namespace model
#endif
