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

} /* namespace model */
