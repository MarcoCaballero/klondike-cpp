#ifndef MODEL_STACK_H
#define MODEL_STACK_H

#include <model/CardList.h>

namespace model {

class Stack {
  public:
    Stack();

    virtual ~Stack();

    Card & getCard();

    void pop();

    const int size();

    const bool isEmpty();

    const bool isFull();

    void push(const Card & card);

    virtual bool isAllowedPush(Card card) = 0;


  protected:
    CardList cards;

};

} // namespace model
#endif
