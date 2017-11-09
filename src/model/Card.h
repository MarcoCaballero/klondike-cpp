#ifndef MODEL_CARD_H_
#define MODEL_CARD_H_


namespace model {

class Card {
public:
	Card(int value, int suite, int color);
	virtual ~Card();
	const int getValue();
	const int getSuite();
	const int getColor();
	void setColor(int color);
	const bool isVisible();
	void setVisibility(bool visibility);
	const bool isPreviousValue(Card card);
	const bool isFollowingValue(Card card);
	const bool isEqualSuite(Card card);
	const bool isEqualColor(Card card);

private:
	int value;
	int color;
	int suite;
	bool visibility;

	int compareValue(int value);
};

} /* namespace model */

#endif /* MODEL_CARD_H_ */
