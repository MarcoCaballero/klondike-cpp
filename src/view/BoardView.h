#ifndef SRC_VIEW_BOARDVIEW_H_
#define SRC_VIEW_BOARDVIEW_H_

#include <controller/Controller.h>
#include <utils/IOConsoleUtils.h>


using namespace controller;

namespace view {

class BoardView {
public:
	BoardView(Controller *controller);
	BoardView(const BoardView& boardView);
	virtual ~BoardView();
	void write();

private:
	controller::Controller* controller;
};

} /* namespace view */

#endif /* SRC_VIEW_BOARDVIEW_H_ */
