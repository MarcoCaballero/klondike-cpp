#include <utils/MoveDialog.h>

namespace utils {

MoveDialog::MoveDialog(std::string title) {
	this->title = title;
}

MoveDialog::~MoveDialog() {}

std::string MoveDialog::read(std::list<std::string> allowed) {
	utils::IOConsoleUtils* utils = utils::IOConsoleUtils::getInstance();
	utils->writeln(title);
	return utils->readString(allowed);
}
} /* namespace view */
