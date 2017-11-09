#ifndef MODEL_CARD_H
#define MODEL_CARD_H


namespace model {

class Card {
  public:
    Card(int value, int suit, int color);

    virtual ~Card();

    const int getValue();

    const int getSuit();

    const int getColor();

    void setColor(int color);

    const bool isVisible();

    void setVisibility(bool visibility);

    const bool isPreviousValue(int value);

    const bool isFollowingValue(int value);

    const bool isEqualSuit(int suit);

    const bool isEqualColor(int color);


  private:
    int value;

    int color;

    int suit;

    bool visibility;

    int compareValue(int value);

};

} // namespace model
#endif
