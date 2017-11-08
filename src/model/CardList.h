#ifndef SRC_MODEL_CARDLIST_H_
#define SRC_MODEL_CARDLIST_H_

#include <model/Card.h>
#include <vector>

namespace model {

class CardList {
public:
	CardList();
	CardList(std::vector<Card> cards);
	virtual ~CardList();
	Card& getCard();
	Card& getCard(int pos);
	CardList getListOfCards(int length);
	void setVisible(int pos, bool visibility);
	void pop();
	void popList(int length);
	int size();
	bool isEmpty();
	bool isFull(int maxLength);
	bool isFullOfInvisible();
	void push(Card card);
	void pushBack(Card card);

private:
	std::vector<Card> cards;
};

} /* namespace model */

#endif /* SRC_MODEL_CARDLIST_H_ */
