#ifndef SRC_UTILS_MENUDIALOG_H_
#define SRC_UTILS_MENUDIALOG_H_

#include <utils/IOConsoleUtils.h>

namespace utils {

class MenuDialog {
public:
	MenuDialog();
	virtual ~MenuDialog();

	int read();
private:
	void displayMenu();
};

} /* namespace controller */

#endif /* SRC_UTILS_MENUDIALOG_H_ */
