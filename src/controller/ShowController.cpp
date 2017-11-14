/*
 * ShowController.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: ezcabma
 */

#include <controller/ShowController.h>

namespace controller {

ShowController::ShowController(model::Game* game): GameController(game) {
	this->game = game;
}

ShowController::~ShowController() {
	// TODO Auto-generated destructor stub
}

void ShowController::showNewDeckCard(){
	game->showNewDeckCard();
}

void ShowController::showNewTableauCard(std::string target){
	game->showNewTableauCard(target);
}
} /* namespace controller */
