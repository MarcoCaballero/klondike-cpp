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


void IOConsoleUtils::write(const std::string array[]) {
	for (std::string string: array) {
		write(string);
	}
}

int IOConsoleUtils::readInt(int max) {
	int selected;
	do {
		writeln("Enter a number between 1 y " + std::to_string(max) + ":");
		std::cin >> selected;
		if (selected > max) {
			writeln("Error the number is out of limit");
		}
	} while (selected > max || selected <= 0);
	return selected;
}

std::string IOConsoleUtils::readString(const std::string allowedStrings[]) {
	std::string selected;
	do {
		write("Enter a string between :");
		write(allowedStrings);
		std::cin >> selected;
		if (containsString(selected, allowedStrings)) {
			writeln("Error the selected cell does not exist");
		}
	} while (containsString(selected, allowedStrings));
	return selected;
}


bool IOConsoleUtils::containsString(std::string target,const std::string array[]) {
	bool status = true;
	for (std::string string: array) {
		if(string != target)
			status = false;
	}
	return status;
}

} /* namespace model */
