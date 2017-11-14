#include <controller/Logic.h>
#include <controller/StartController.h>
#include <controller/GameController.h>

namespace controller {

Logic::Logic() {
	game = new Game();
	startController = new StartController(game);
	gameController = new GameController(game);
}

Logic::~Logic() {
}

Controller* Logic::getController() {
	switch (game->getState()) {
	case State::INITIAL:
		return startController;
	case State::IN_GAME:
		return gameController->getController();
	default:
		return NULL;
		break;
	}
}

} /* namespace model */
