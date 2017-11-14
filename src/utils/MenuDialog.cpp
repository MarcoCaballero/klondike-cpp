#include <utils/MenuDialog.h>

namespace utils {

MenuDialog::MenuDialog() {}

MenuDialog::~MenuDialog() {
}

int MenuDialog::read() {
	displayMenu();
	utils::IOConsoleUtils* utils = utils::IOConsoleUtils::getInstance();
	return utils->readInt(6);
}

void MenuDialog::displayMenu() {
	utils::IOConsoleUtils* utils = utils::IOConsoleUtils::getInstance();
	utils->writeln("Main Menu");
	utils->writeln("1 - Show new card");
	utils->writeln("2 - Move from deck");
	utils->writeln("3 - Move from tableau");
	utils->writeln("4 - Move from foundation");
	utils->writeln("5 - Show tableau card");
	utils->writeln("6 - Exit");

}

} /* namespace controller */
