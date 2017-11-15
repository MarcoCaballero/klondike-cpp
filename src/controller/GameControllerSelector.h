#ifndef SRC_CONTROLLER_GAMECONTROLLERSELECTOR_H_
#define SRC_CONTROLLER_GAMECONTROLLERSELECTOR_H_

#include <controller/MoveController.h>
#include <controller/ShowController.h>
#include <model/Game.h>

namespace controller {

class GameControllerSelector {
public:
	GameControllerSelector(model::Game* game);

	Action getAction() const;

	void setAction(Action action);

	virtual ~GameControllerSelector();

	ShowController* getShowController();

	MoveController* getMoveController();

	GameController* getController();

private:
	model::Game* game;
	Action action;
};
} /* namespace controller */

#endif /* SRC_CONTROLLER_GAMECONTROLLERSELECTOR_H_ */
