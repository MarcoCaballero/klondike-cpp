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
	void write(const std::string array[]);
	int readInt(int max);
	std::string readString(const std::string allowedStrings[]);
private:
	static IOConsoleUtils* utils;
	IOConsoleUtils(){}
	IOConsoleUtils(IOConsoleUtils const&){};
	IOConsoleUtils& operator=(IOConsoleUtils const&);
	bool containsString(std::string target,const std::string array[]);
};

} /* namespace utils */

#endif /* SRC_UTILS_IOCONSOLEUTILS_H_ */
