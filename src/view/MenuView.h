#ifndef SRC_VIEW_MENUVIEW_H_
#define SRC_VIEW_MENUVIEW_H_

#include <controller/GameController.h>

namespace view {

class MenuView {
public:
	MenuView(controller::GameController* gameController);
	virtual ~MenuView();
	void write();
private:
	controller::GameController* gameController;
	const std::string DECK[1];
	const std::string ALLOWED_DECK[12];
	const std::string TABLEAU[7];
	const std::string FOUNDATIONS[4];
	const std::string ALLOWED_TABLEAU[4];

};
const std::string MenuView::DECK[1] = { "d1" };
const std::string MenuView::ALLOWED_DECK[12] = { "d1", "f1", "f2", "f3", "f4", "t1", "t2",
		"t3", "t4", "t5", "t6", "t7" };
const std::string MenuView::TABLEAU[7] = { "t1", "t2", "t3", "t4", "t5", "t6", "t7" };
const std::string MenuView::FOUNDATIONS[4] = { "f1", "f2", "f3", "f4" };
const std::string MenuView::ALLOWED_TABLEAU[4] = MenuView::FOUNDATIONS;
} /* namespace controller */

#endif /* SRC_VIEW_MENUVIEW_H_ */
