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

void MenuView::write() {
	utils::IOConsoleUtils* utils = utils::IOConsoleUtils::getInstance();


	int option = utils::MenuDialog().read();
	switch (option) {
	case (1):
		MoveMenuView(moveController).print(DECK, ALLOWED_DECK);
		break;
	case (2):
		break;
	case (3):
		break;
	case (4):
		break;
	case (5):
		MoveMenuView(moveController).print(TABLEAU, ALLOWED_TABLEAU);
		break;
	case (6):
		break;
	default:
		break;
	}
	utils->writeln("Selected option" + std::to_string(option));
}

} /* namespace controller */
