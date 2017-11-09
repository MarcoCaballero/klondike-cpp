#ifndef SRC_MODEL_CARDLIST_H_
#define SRC_MODEL_CARDLIST_H_

#include <model/Card.h>
#include <vector>

namespace model {

class CardList {
public:
	CardList();
	CardList(std::vector<Card>& cards);
	CardList(const CardList& cardlist);
	virtual ~CardList();
	Card& getCard();
	Card& getCard(int pos);
	std::vector<Card>& getCards();
	const CardList getListOfCards(int length);
	void setVisible(int pos, bool visibility);
	void pop();
	void popList(int length);
	const int size();
	const bool isEmpty();
	const bool isFull(int maxLength);
	const bool isFullOfInvisible();
	void push(const Card& card);
	void pushBack(const Card& card);

private:
	std::vector<Card> cards;
};

} /* namespace model */

#endif /* SRC_MODEL_CARDLIST_H_ */
