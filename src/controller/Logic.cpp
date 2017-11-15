#include <controller/Logic.h>
#include <controller/StartController.h>
#include <controller/GameController.h>

namespace controller {

Logic::Logic() {
	game = new Game();
	startController = new StartController(game);
	gameControllerSelector = new GameControllerSelector(game);
}

Logic::~Logic() {
}

GameController* Logic::getController() {
	switch (game->getState()) {
	case State::INITIAL:
		return startController;
	case State::IN_GAME:
		return gameControllerSelector->getShowController();
	default:
		return NULL;
		break;
	}
}

} /* namespace model */
