#include <iostream>
#include <model/CardList.h>
#include <model/Card.h>

using namespace std;
using namespace model;

int main(int argc, char *argv[]) {

	Card card = Card(1, 1, 1); // AS, CLUBS, BLACK

	Card card2 = Card(2, 3, 1); // DOS, SPADES, BLACK

	Card card3 = Card(5, 2, 2); // 5, DIAMONDS, RED

	Card card4 = Card(6, 4, 2); // 6, HEARTS, RED

	Card card5 = Card(13, 4, 2); // 6, HEARTS, RED

	card.setVisibility(true);

	std::vector<Card> vector;
	vector.push_back(card);
	vector.push_back(card2);
	vector.push_back(card3);
	vector.push_back(card4);
	CardList cardlist = CardList(vector);

	cout << cardlist.isFullOfInvisible() << endl;

	for (int i = 0; i <= cardlist.size(); ++i) {
		cardlist.getCard(i).setVisibility(false);
	}

	cout << cardlist.isFullOfInvisible() << endl;

	CardList subcardlist;
	subcardlist = cardlist.getListOfCards(2);

	cout << subcardlist.isFullOfInvisible() << endl;

	for (int i = 0; i <= cardlist.size(); ++i) {
		subcardlist.getCard(i).setVisibility(true);
	}

	cout << subcardlist.isFullOfInvisible() << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}
