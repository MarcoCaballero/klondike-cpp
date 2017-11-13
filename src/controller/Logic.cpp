#include <controller/Logic.h>

namespace controller {

Logic::Logic() {
	game = new Game();
	startController = new StartController(game);
}

Logic::~Logic() {
}

Controller* Logic::getController() {
	switch (game->getState()) {
	case State::INITIAL:
		return startController;
	default:
		return NULL;
		break;
	}
}

} /* namespace model */
