#ifndef SRC_UTILS_MOVEDIALOG_H_
#define SRC_UTILS_MOVEDIALOG_H_

#include <string>
#include <list>
#include <utils/IOConsoleUtils.h>

namespace utils {

class MoveDialog {
public:
	MoveDialog(std::string title);

	virtual ~MoveDialog();

	std::string read(std::list<std::string> allowed);
private:
	std::string title;
	std::string read();
};

} /* namespace view */

#endif /* SRC_UTILS_MOVEDIALOG_H_ */
