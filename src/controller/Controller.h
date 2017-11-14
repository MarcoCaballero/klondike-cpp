#ifndef SRC_CONTROLLER_CONTROLLER_H_
#define SRC_CONTROLLER_CONTROLLER_H_

#include <model/Game.h>
#include <memory>
#include <map>

namespace controller {

class Controller {
public:
	virtual ~Controller();
	const model::State& getState() const;
	void setState(model::State);
	std::shared_ptr<model::Board> getGameBoard();
	model::Card& getDeckCard();
	const bool isDeckEmpty();
	const int getDeckSize();
	const bool existWinner();

	const std::map<std::string, std::shared_ptr<model::Deck>>& getDecks() const;
	const std::map<std::string, std::shared_ptr<model::FoundationStack>>& getFoundations() const;
	const std::map<std::string, std::shared_ptr<model::TableauStack>>& getTableaus() const;

	virtual void accept(class ControllerVisitor*) = 0;

protected:
	model::Game* game;
};

} /* namespace controller */

#endif /* SRC_CONTROLLER_CONTROLLER_H_ */
