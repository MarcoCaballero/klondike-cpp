#ifndef MODEL_CARDLIST_H
#define MODEL_CARDLIST_H

#include <vector>
#include <model/Card.h>

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

	bool isEmpty();

	bool isFull(int maxLength);

	bool isFullOfInvisible();

	void push(const Card& card);

	void pushBack(const Card& card);

	void pushList(std::vector<Card>& cards);

private:
	std::vector<Card> cards;

};

} // namespace model
#endif
