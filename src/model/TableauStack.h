#ifndef MODEL_TABLEAUSTACK_H
#define MODEL_TABLEAUSTACK_H

#include <model/Stack.h>

namespace model {

class TableauStack: public Stack {
public:
	TableauStack();

	virtual ~TableauStack();

	bool isAllowedPush(Card card);

	void showAvailableCard();

	const CardList getListOfCards(int length);

	void pushList(CardList & cardlist);

private:
	bool checkColor(int color);

	bool checkValue(int value);

};

} // namespace model
#endif
