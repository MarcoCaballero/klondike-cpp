#include <utils/MoveDialog.h>
#include <view/MoveMenuView.h>

namespace view {

MoveMenuView::MoveMenuView(controller::MoveController* moveController) {
	this->moveController = moveController;

}

MoveMenuView::~MoveMenuView() {
	// TODO Auto-generated destructor stub
}

void MoveMenuView::print(const std::string allowedFrom[],const std::string allowedTo[]) {
	std::string selectedFrom = utils::MoveDialog("Move from : ").read(allowedFrom);
	std::string selectedTo = utils::MoveDialog("Move To : ").read(allowedTo);
	moveController->move(selectedFrom, selectedTo);
}

}
/* namespace view */
