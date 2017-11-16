#include <controller/GameControllerSelector.h>
#include <controller/ShowDeckCardController.h>
#include <controller/ShowTableauCardController.h>

namespace controller {

GameControllerSelector::GameControllerSelector(model::Game* game) {
	this->game = game;
	this->action = Action::NONE;
}

GameControllerSelector::~GameControllerSelector() {
	// TODO Auto-generated destructor stub
}

ShowController* GameControllerSelector::getShowController() {
	switch (action) {
	case Action::SHOW_DECK:
		return new ShowDeckCardController(game);
	case Action::SHOW_TABLEAU:
		return new ShowTableauCardController(game);
	default:
		return NULL;
	}
}
MoveController* GameControllerSelector::getMoveController() {
	switch (action) {
	case Action::MOVE:
		return new MoveController(game);
	default:
		return NULL;
	}
}

GameController* GameControllerSelector::getController() {
	if (action == Action::SHOW_DECK | Action == Action::SHOW_TABLEAU) {
		return getShowController();
	} else if (action == Action::MOVE ) {
		return getMoveController();
	}
	return NULL;
}
Action GameControllerSelector::getAction() const {
	return action;
}

void GameControllerSelector::setAction(Action action) {
	this->action = action;
}

} /* namespace controller */
