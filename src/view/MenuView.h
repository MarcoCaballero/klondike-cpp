#ifndef SRC_VIEW_MENUVIEW_H_
#define SRC_VIEW_MENUVIEW_H_

#include <list>
#include <controller/GameController.h>

namespace view {

class MenuView {
public:
	MenuView(controller::GameController* gameController);
	virtual ~MenuView();
	void write();
	const std::list<std::string> getDeckPosition();

private:
	controller::GameController* gameController;
};
} /* namespace controller */

#endif /* SRC_VIEW_MENUVIEW_H_ */
