#include <view/MenuView.h>
#include <utils/IOConsoleUtils.h>
#include <utils/MenuDialog.h>
#include <view/MoveMenuView.h>

namespace view {

MenuView::MenuView(controller::GameController* gameController) {
	this->gameController = gameController;
}

MenuView::~MenuView() {
}


const std::list<std::string> MenuView::getDeckPosition() {
	std::list<std::string> allowedDecks;
	allowedDecks.push_back("d1");
	return allowedDecks;
}

void MenuView::write() {
	utils::IOConsoleUtils* utils = utils::IOConsoleUtils::getInstance();
	int option = utils::MenuDialog().read();
	switch (option) {
	case (1):
		MoveMenuView(gameController).print(getDeckPosition(), getDeckPosition());
		break;
	case (2):
		break;
	case (3):
		break;
	case (4):
		break;
	case (5):
		MoveMenuView(gameController).print(getDeckPosition(), getDeckPosition());
		break;
	case (6):
		break;
	default:
		break;
	}
	utils->writeln("Selected option" + std::to_string(option));
}

} /* namespace controller */
