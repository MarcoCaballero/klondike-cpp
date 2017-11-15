#include <controller/ShowDeckCardController.h>

namespace controller {

ShowDeckCardController::ShowDeckCardController(model::Game* game): GameController(game) {
	this->game = game;
}

ShowDeckCardController::~ShowDeckCardController() {
	// TODO Auto-generated destructor stub
}

void ShowDeckCardController::show(){
	game->showNewDeckCard();
}
} /* namespace controller */
