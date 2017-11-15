#ifndef SRC_UTILS_IOCONSOLEUTILS_H_
#define SRC_UTILS_IOCONSOLEUTILS_H_
#include <memory>
#include <iostream>
#include <list>

namespace utils {

class IOConsoleUtils {
public:
	static IOConsoleUtils* getInstance();
	void write(std::string string);
	void writeln(std::string string);
	void write(std::list<std::string> allowed);
	int readInt(int max);
	std::string readString(std::list<std::string> allowed);
private:
	static IOConsoleUtils* utils;
	IOConsoleUtils(){}
	IOConsoleUtils(IOConsoleUtils const&){};
	IOConsoleUtils& operator=(IOConsoleUtils const&);
	bool containsString(std::string target,std::list<std::string> allowed);
};

} /* namespace utils */

#endif /* SRC_UTILS_IOCONSOLEUTILS_H_ */
