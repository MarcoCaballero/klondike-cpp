#include <controller/StartController.h>

namespace controller {

StartController::StartController(model::Game* game){
	this->game = game;
}

StartController::~StartController() {
}

void StartController::accept(ControllerVisitor* visitor) {
	visitor->visit(this);
}

} /* namespace controller */
