#ifndef MODEL_TABLEAUSTACK_H
#define MODEL_TABLEAUSTACK_H

#include <model/Stack.h>

namespace model {

class TableauStack: public Stack {
public:
	TableauStack();

	virtual ~TableauStack();

	void pushList(CardList& cardlist);

	bool isAllowedPush(Card card);

	bool isAllowedPushList(CardList cardlist);

	void showAvailableCard();

	const CardList getListOfCards(int length);

	void popList(int length);

private:
	bool checkColor(int color);

	bool checkValue(int value);

	bool checkList(CardList cardlist);

};

} // namespace model
#endif
