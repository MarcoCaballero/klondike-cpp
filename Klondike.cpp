#include <iostream>
#include <model/CardList.h>
#include <model/Card.h>
#include <model/Deck.h>
#include <model/FoundationStack.h>

using namespace std;
using namespace model;

int main(int argc, char *argv[]) {

	Card card = Card(1, 1, 1); // AS, CLUBS, BLACK

	Card card2 = Card(2, 1, 1); // DOS, SPADES, BLACK

	Card card3 = Card(3, 1, 1); // 5, DIAMONDS, RED

	Card card4 = Card(5, 1, 1); // 6, HEARTS, RED

	std::vector<Card> vector;
	vector.push_back(card);
	vector.push_back(card2);
	vector.push_back(card3);
	vector.push_back(card4);
	CardList cardlist = CardList(vector);
	Deck deck = Deck(cardlist);
	FoundationStack foundation = FoundationStack();

	cout << "[" << deck.getCard().getValue() << ":" << deck.getCard().getSuit()
			<< ":" << deck.getCard().getColor() << "]" << deck.size() << endl;

	deck.getCard().setVisibility(true);


	foundation.setSuit(deck.getCard().getSuit());
	foundation.push(deck.getCard());
	deck.turnCard();

	cout << "[" << deck.getCard().getValue() << ":" << deck.getCard().getSuit()
				<< ":" << deck.getCard().getColor() << "]" << deck.size() << endl;

	cout << "[" << foundation.getCard().getValue() << ":" << foundation.getCard().getSuit()
				<< ":" << foundation.getCard().getColor() << "]" << foundation.size() << endl;


//	system("PAUSE");
	return EXIT_SUCCESS;
}
