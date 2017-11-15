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

void IOConsoleUtils::write(std::list<std::string> allowed) {
	for (std::list<std::string>::const_iterator i = allowed.begin();
			i != allowed.end(); ++i) {
		write(i->c_str());
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

std::string IOConsoleUtils::readString(std::list<std::string> allowed) {
	std::string selected;
	do {
		write("Enter a string between :");
		write (allowedStrings);
		std::cin >> selected;
		if (containsString(selected, allowed)) {
			writeln("Error the selected cell does not exist");
		}
	} while (containsString(selected, allowed));
	return selected;
}

bool IOConsoleUtils::containsString(std::string target,
		std::list<std::string> allowed) {
	bool status = true;
	for (std::list<std::string>::const_iterator i = allowed.begin();
			i != allowed.end(); ++i) {
		if (i->c_str() != target)
			status = false;
	}
	return status;
}

} /* namespace model */
