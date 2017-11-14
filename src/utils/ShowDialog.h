#ifndef SRC_UTILS_SHOWDIALOG_H_
#define SRC_UTILS_SHOWDIALOG_H_

#include <utils/IOConsoleUtils.h>

namespace utils {

class ShowDialog {
public:
	ShowDialog();

	virtual ~ShowDialog();

	int read();
private:
	void displayMenu();
};

} /* namespace view */

#endif /* SRC_UTILS_SHOWDIALOG_H_ */
