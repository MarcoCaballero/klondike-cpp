#include <view/BoardView.h>
#include <view/CardView.h>

namespace view {

BoardView::BoardView(Controller *controller) {
	this->controller = controller;
}

BoardView::BoardView(const BoardView& boardView) :
		controller(boardView.controller) {
}

BoardView::~BoardView() {
}

void BoardView::write() {
	utils::IOConsoleUtils* utils = utils::IOConsoleUtils::getInstance();
	utils->writeln("Board");
	utils->write("d1 => ");

	if (!controller->isDeckEmpty()) {
		CardView(controller->getDeckCard()).write();
	} else {
		utils->write("-X-");
	}

	utils->writeln(": (size)" + std::to_string(controller->getDeckSize()));
	for (const auto& entry : controller->getFoundations()) {
		utils->write(entry.first + "=> ");
		if (!entry.second->isEmpty()) {
			CardView(entry.second->getCard()).write();
		} else {
			utils->write("-X-");
		}

		utils->writeln(": (size)" + std::to_string(entry.second->size()));
	}
	for (const auto& entry : controller->getTableaus()) {
		utils->write(entry.first + "=> ");
		if (!entry.second->isEmpty()) {
			CardView(entry.second->getCard()).write();
		} else {
			utils->write("-X-");
		}
		utils->writeln(": (size)" + std::to_string(entry.second->size()));
	}
}

} /* namespace view */
