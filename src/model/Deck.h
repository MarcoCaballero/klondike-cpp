#ifndef SRC_MODEL_DECK_H_
#define SRC_MODEL_DECK_H_

#include <model/CardList.h>
#include <model/Card.h>

namespace model {

class Deck {
public:
	Deck();
	Deck (CardList cards);
	virtual ~Deck();
	Card& getCard();
	void setVisible(int pos, bool visibility);
	void pop();
	const int size();
	const bool isEmpty();
	const bool isFull(int maxLength);
	const bool isFullOfInvisible();
	void push(const Card& card);
	void turnCard();
	void shuffle();

private:
	CardList cards;
};

} /* namespace model */

#endif /* SRC_MODEL_DECK_H_ */
