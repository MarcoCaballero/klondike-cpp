#ifndef MODEL_DECK_H
#define MODEL_DECK_H

#include <model/CardList.h>

namespace model {

class Deck {
public:
	Deck();

	Deck(CardList& cards);

	virtual ~Deck();

	Card& getCard();

	void setAvailableCardVisibility(bool visibility);

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

} // namespace model
#endif
