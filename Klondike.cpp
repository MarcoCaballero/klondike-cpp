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

	CardList cardlist;
	cardlist.push(card);
	cardlist.push(card2);
	cardlist.push(card3);
	cardlist.push(card4);


	cout << cardlist.isFullOfInvisible() << endl;


	for (int i = 0; i <= cardlist.size(); ++i) {
		cardlist.getCard(i).setVisibility(false);
	}

	cout << cardlist.isFullOfInvisible() << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}
