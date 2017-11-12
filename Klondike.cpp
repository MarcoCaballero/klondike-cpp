#include <iostream>
#include <vector>
#include <memory>
#include <model/Board.h>
#include <utils/IOConsoleUtils.h>

using namespace std;
using namespace model;

int main(int argc, char *argv[]) {

	CardList cardlist;

	for (int i = 1; i <= 13; ++i) {
		for (int j = 1; j <= 4; ++j) {
			Card card = Card(i, j, j % 2);
			cardlist.pushBack(card);
		}
	}

	std::shared_ptr<Board> board = std::make_shared<Board>(cardlist);
	const std::map<std::string, std::shared_ptr<Deck>> map = board->getDecks();

	std::shared_ptr<Deck> waste = board->getDecks().find("d2")->second;
	IOConsoleUtils* utils = IOConsoleUtils::getInstance();

	do {
		string str = "[" + to_string(board->getDeckCard().getValue()) + ":"
				+ to_string(board->getDeckCard().getSuit()) + ":"
				+ to_string(board->getDeckCard().getColor()) + "]"
				+ to_string(board->getDeckCard().isVisible());
		utils->writeln(str);
		board->turnDeckCard();

	} while (!board->isDeckEmpty());

//	system("PAUSE");
	return EXIT_SUCCESS;
}
