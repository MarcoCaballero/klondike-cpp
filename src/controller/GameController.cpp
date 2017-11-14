#include <controller/GameController.h>
#include <controller/MoveController.h>

namespace controller {

GameController::GameController(model::Game* game) {
	this->game = game;
	this->action = Action::NONE;
}

GameController::~GameController() {
	// TODO Auto-generated destructor stub
}

void GameController::accept(ControllerVisitor* visitor) {
	visitor->visit(this);
}

Action GameController::getAction() const {
	return action;
}

void GameController::setAction(Action action) {
	this->action = action;
}

GameController* GameController::getController() {
	switch (action) {
	case (Action::MOVE):
		return MoveController(game);
	case (Action::SHOW):
		return NULL;
	default:
		return NULL;
	}
}

} /* namespace controller */
