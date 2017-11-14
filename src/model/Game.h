#ifndef SRC_MODEL_GAME_H_
#define SRC_MODEL_GAME_H_

#include <memory>
#include <model/Board.h>
#include <model/State.h>

namespace model {

class Game {
public:
	Game();
	virtual ~Game();

	bool isFinished();

	bool isCompleteFoundations();

	void clear();

	void initGame();

	void move(std::string origin, std::string target);

	void move(std::string origin, std::string target, int length);

	void showNewDeckCard();

	void showNewTableauCard(std::string target);

	Card& getDeckCard();

	bool isDeckEmpty();

	const int getDeckSize();

	State& getState();

	void setState(State state);

	std::shared_ptr<Board> getBoard();

private:
	State state;
	std::shared_ptr<Board> board;
};

} /* namespace model */

#endif /* SRC_MODEL_GAME_H_ */
