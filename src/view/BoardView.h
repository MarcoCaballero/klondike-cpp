#ifndef SRC_VIEW_BOARDVIEW_H_
#define SRC_VIEW_BOARDVIEW_H_

#include <controller/Controller.h>
#include <utils/IOConsoleUtils.h>

namespace view {

class BoardView {
public:
	BoardView(controller::Controller*);
	virtual ~BoardView();
	void write();

private:
	controller::Controller* controller;
	utils::IOConsoleUtils* utils;
};

} /* namespace view */

#endif /* SRC_VIEW_BOARDVIEW_H_ */
