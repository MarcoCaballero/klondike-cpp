#ifndef MODEL_STACK_H
#define MODEL_STACK_H

#include <memory>
#include <model/CardList.h>

namespace model {

class Stack {
public:
	Stack();

	virtual ~Stack();

	Card& getCard();

	void pop();

	void switchONvisibility();

	const int size();

	const bool isEmpty();

	const bool isFull();

	const bool isFullOfInvisible();

	void push(const Card& card);

	void pushList(CardList& cardlist);

	virtual bool isAllowedPush(Card card) = 0;

	virtual bool isAllowedPushList(CardList cardlist) = 0;

protected:
	CardList cards;

};

} // namespace model
#endif
