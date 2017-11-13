#include <view/BoardView.h>
#include <view/CardView.h>

namespace view {

BoardView::BoardView(controller::Controller* controller) {
	this->controller = controller;
	utils = utils::IOConsoleUtils::getInstance();
}

BoardView::~BoardView() {
	// TODO Auto-generated destructor stub
}

void BoardView::write() {
	utils->write("d1 => ");
	CardView(controller->getDeckCard()).write();

	for (const auto& entry : controller->getFoundations()) {
		utils->write(entry.first + "=> ");
		CardView(entry.second->getCard()).write();
		utils->writeln(": (size)" + entry.second->size());
	}
	for (const auto& entry : controller->getTableaus()) {
		utils->write(entry.first + "=> ");
		CardView(entry.second->getCard()).write();
		utils->writeln(": (size)" + entry.second->size());
	}
}

} /* namespace view */
