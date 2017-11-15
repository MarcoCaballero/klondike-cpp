#include <controller/MoveController.h>

namespace controller {

MoveController::MoveController(model::Game* game): GameController(game) {
	this->game = game;
}

MoveController::~MoveController() {
}

void MoveController::move(std::string origin, std::string target) {
	game->move(origin, target);
}
void MoveController::move(std::string origin, std::string target, int length) {
	game->move(origin, target, length);
}

} /* namespace controller */
