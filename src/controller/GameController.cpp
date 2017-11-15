#include <controller/GameController.h>
#include <controller/MoveController.h>

namespace controller {

GameController::GameController(model::Game* game) {
	this->game = game;
}

GameController::~GameController() {
	// TODO Auto-generated destructor stub
}

void GameController::accept(ControllerVisitor* visitor) {
	visitor->visit(this);
}

model::Game* GameController::getGame() {
	return game;
}

} /* namespace controller */
