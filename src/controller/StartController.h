#ifndef SRC_CONTROLLER_STARTCONTROLLER_H_
#define SRC_CONTROLLER_STARTCONTROLLER_H_

#include <controller/Controller.h>
#include <controller/ControllerVisitor.h>

namespace controller {

class StartController: public Controller {
public:
	StartController(model::Game* game);
	virtual ~StartController();
	/*virtual*/ void accept(ControllerVisitor*);
};

} /* namespace controller */

#endif /* SRC_CONTROLLER_STARTCONTROLLER_H_ */
