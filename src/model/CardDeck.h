#ifndef SRC_MODEL_CARDDECK_H_
#define SRC_MODEL_CARDDECK_H_

#include <model/CardList.h>
#include <model/Card.h>

namespace model {

class CardDeck {
public:
	CardDeck();
	CardDeck (CardList cards);
	virtual ~CardDeck();
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

#endif /* SRC_MODEL_CARDDECK_H_ */
