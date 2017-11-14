#ifndef SRC_MODEL_BOARD_H_
#define SRC_MODEL_BOARD_H_

#include <map>
#include <memory>
#include <algorithm>
#include <model/Deck.h>
#include <model/FoundationStack.h>
#include <model/TableauStack.h>

namespace model {

class Board {
public:
	Board(CardList& cardlist);

	virtual ~Board();

	void initBoard();

	void push(std::string target, Card& card);

	void pushListToTableau(std::string target, CardList cardlist);

	void pop(std::string target);

	void popList(std::string target, int length);

	Card& getCard(std::string target);

	const CardList getListOfCards(std::string target, int length);

	int getFinishedFoundations();

	bool areAllFundationsFinished();

	Card& getDeckCard();

	void turnDeckCard();

	bool isDeckEmpty();

	void clear();

	const int getDeckSize();

	void showNewTableauCard(std::string target);

	const std::map<std::string, std::shared_ptr<Deck>>& getDecks() const;

	const std::map<std::string, std::shared_ptr<FoundationStack>>& getFoundations() const;

	const std::map<std::string, std::shared_ptr<TableauStack>>& getTableaus() const;

private:
	std::map<std::string, std::shared_ptr<Deck>> decks;
	std::map<std::string, std::shared_ptr<TableauStack>> tableaus;
	std::map<std::string, std::shared_ptr<FoundationStack>> foundations;

	const int FOUNDATIONS_SIZE = 4;
	const int TABLEAUS_SIZE = 7;
	const std::string DECK = "d1";
	const std::string WASTE = "d2";

	bool isTableauFullOfInvisible(std::string target);
	bool isTableauKey(std::string target);
	bool isFoundationKey(std::string target);
	bool isDeckKey(std::string target);
	void toLowerCase(std::string& target);
	std::shared_ptr<TableauStack> getTableauByName(std::string name);
	std::shared_ptr<FoundationStack> getFoundationByName(std::string name);
	void restoreDeck();
	void restoreTableau();
	void restoreFoundation();

};

} /* namespace model */

#endif /* SRC_MODEL_BOARD_H_ */
