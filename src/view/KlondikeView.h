#ifndef SRC_VIEW_KLONDIKEVIEW_H_
#define SRC_VIEW_KLONDIKEVIEW_H_

#include <controller/ControllerVisitor.h>
#include <controller/Controller.h>
#include <controller/StartController.h>
#include <controller/GameController.h>

using namespace controller;

namespace view {

class KlondikeView: public ControllerVisitor {
public:
	KlondikeView();
	virtual ~KlondikeView();
	void interact(Controller* controller);
	/*virtual*/ void visit(StartController* startController);
	/*virtual*/ void visit(GameController* gameController);
};

} /* namespace controller */

#endif /* SRC_VIEW_KLONDIKEVIEW_H_ */
