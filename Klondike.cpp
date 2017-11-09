#include <iostream>
#include <model/CardList.h>
#include <model/Card.h>
#include <model/CardDeck.h>

using namespace std;
using namespace model;

int main(int argc, char *argv[]) {

	Card card = Card(1, 1, 1); // AS, CLUBS, BLACK

	Card card2 = Card(2, 3, 1); // DOS, SPADES, BLACK

	Card card3 = Card(5, 2, 2); // 5, DIAMONDS, RED

	Card card4 = Card(6, 4, 2); // 6, HEARTS, RED

	Card card5 = Card(13, 4, 2); // 6, HEARTS, RED

	std::vector<Card> vector;
	vector.push_back(card);
	vector.push_back(card2);
	vector.push_back(card3);
	vector.push_back(card4);
	CardList cardlist = CardList(vector);
	CardDeck deck = CardDeck(cardlist);

	cout << vector.size() << "-" << cardlist.size() << "-" << deck.size()
			<< endl;

	for (int i = 0; i < 4; ++i) {
		cout << i << endl;

		cout << "[" << deck.getCard().getValue() << ":"
				<< deck.getCard().getSuite() << ":" << deck.getCard().getColor()
				<< "]" << deck.getCard().isVisible() << deck.size() << i
				<< endl;
		deck.pop();
	}

	deck.push(card);
	deck.push(card2);
	deck.push(card3);
	deck.push(card4);
	for (int i = 0; i < 4; i++) {
		cout << "[" << deck.getCard().getValue() << ":"
				<< deck.getCard().getValue() << ":" << deck.getCard().getValue()
				<< "]" << deck.getCard().isVisible() << endl;
		deck.pop();
	}

	cout << deck.isFullOfInvisible() << deck.size() << endl; //

	deck.setVisible(0, true);

	cout << deck.isFullOfInvisible() << endl;

//	system("PAUSE");
	return EXIT_SUCCESS;
}
