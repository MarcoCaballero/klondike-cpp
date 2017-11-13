#ifndef SRC_UTILS_IOCONSOLEUTILS_H_
#define SRC_UTILS_IOCONSOLEUTILS_H_
#include <memory>
#include <iostream>

namespace utils {

class IOConsoleUtils {
public:
	static IOConsoleUtils* getInstance();
	void write(std::string string);
	void writeln(std::string string);
private:
	IOConsoleUtils(){}
	IOConsoleUtils(IOConsoleUtils const&){};
	IOConsoleUtils& operator=(IOConsoleUtils const&);
	static IOConsoleUtils* utils;
};

} /* namespace utils */

#endif /* SRC_UTILS_IOCONSOLEUTILS_H_ */
