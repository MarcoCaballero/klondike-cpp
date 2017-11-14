#ifndef SRC_VIEW_MOVEMENUVIEW_H_
#define SRC_VIEW_MOVEMENUVIEW_H_

#include <controller/MoveController.h>

namespace view {

class MoveMenuView {
public:
	MoveMenuView(controller::MoveController* moveController);
	virtual ~MoveMenuView();
	void print(const std::string allowedFrom[],const std::string allowedTo[]);
private:
	controller::MoveController* moveController;

};

} /* namespace view */

#endif /* SRC_VIEW_MOVEMENUVIEW_H_ */
