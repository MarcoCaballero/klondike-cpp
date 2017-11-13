#include <utils/IOConsoleUtils.h>

namespace utils {
IOConsoleUtils* IOConsoleUtils::utils = NULL;

IOConsoleUtils* IOConsoleUtils::getInstance() {
	if (!utils)
		utils = new IOConsoleUtils;
	return utils;
}

void IOConsoleUtils::write(std::string string) {
	std::cout << string;
}

void IOConsoleUtils::writeln(std::string string) {
	std::cout << string << std::endl;
}

int IOConsoleUtils::readInt(int max) {
	int selected;
	do {
		writeln("Enter a number between 1 y " + max);
		std::cin >> selected;
		if (selected > max) {
			writeln("Error the number is out of limit");
		}
		std::cin.clear();
	} while (selected > max || selected <= 0);
	return selected;
}

} /* namespace model */
