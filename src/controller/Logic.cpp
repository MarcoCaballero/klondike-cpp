#include <controller/Logic.h>

namespace controller {

Logic::Logic() {
	game = std::shared_ptr<model::Game>();
	startController = std::shared_ptr<StartController>(game);
}

Logic::~Logic() {
}

std::shared_ptr<Controller> Logic::getController() {
	switch (game->getState()) {
	case State::INITIAL:
		std::shared_ptr<Controller> controller = std::make_shared<controller::StartController>(startController);
		return controller;
	default:
		return NULL;
		break;
	}
}

} /* namespace model */
