#ifndef MODEL_CARD_H_
#define MODEL_CARD_H_


namespace model {

class Card {
public:
	Card(int value, int suite, int color);
	virtual ~Card();
	int getValue();
	int getSuite();
	int getColor();
	void setColor(int color);
	bool isVisible();
	void setVisibility(bool visibility);
	bool isPreviousValue(Card card);
	bool isFollowingValue(Card card);
	bool isEqualSuite(Card card);
	bool isEqualColor(Card card);

private:
	int value;
	int color;
	int suite;
	bool visibility;

	int compareValue(int value);
};

} /* namespace model */

#endif /* MODEL_CARD_H_ */
