#include <controller/ShowTableauCardController.h>

namespace controller {

ShowTableauCardController::ShowTableauCardController(model::Game* game,
		std::string target) :
		GameController(game) {
	this->target = target;
}

ShowTableauCardController::~ShowTableauCardController() {
}

void ShowTableauCardController::show() {
	game->showNewTableauCard(target);
}

} /* namespace controller */
