#include <controller/Controller.h>
#include <model/Board.h>

namespace controller {
Controller::~Controller() {
	// TODO Auto-generated destructor stub
}

const model::State& Controller::getState() const {
	return game->getState();
}

void Controller::setState(model::State state) {
	game->setState(state);
}

std::shared_ptr<model::Board> Controller::getGameBoard() {
	return game->getBoard();
}

const bool Controller::isDeckEmpty() {
	return game->isDeckEmpty();
}

const std::map<std::string, std::shared_ptr<model::Deck>>& Controller::getDecks() const {
	return game->getBoard()->getDecks();
}

const std::map<std::string, std::shared_ptr<model::FoundationStack>>& Controller::getFoundations() const {
	return game->getBoard()->getFoundations();
}

const std::map<std::string, std::shared_ptr<model::TableauStack>>& Controller::getTableaus() const {
	return game->getBoard()->getTableaus();
}
model::Card& Controller::getDeckCard() {
	return game->getDeckCard();
}


const int Controller::getDeckSize() {
	return game->getDeckSize();
}

const bool Controller::existWinner() {
	return game->isFinished();
}

}
/* namespace controller */
