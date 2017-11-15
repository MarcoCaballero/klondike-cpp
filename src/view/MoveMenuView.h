#ifndef SRC_VIEW_MOVEMENUVIEW_H_
#define SRC_VIEW_MOVEMENUVIEW_H_

#include <controller/MoveController.h>

namespace view {

class MoveMenuView {
public:
	MoveMenuView(controller::MoveController* moveController);
	virtual ~MoveMenuView();
	void print(std::list<std::string> allowedFrom, std::list<std::string> allowedTo);
private:
	controller::MoveController* moveController;

};

} /* namespace view */

#endif /* SRC_VIEW_MOVEMENUVIEW_H_ */
