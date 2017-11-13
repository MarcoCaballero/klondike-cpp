#ifndef SRC_CONTROLLER_STARTCONTROLLER_H_
#define SRC_CONTROLLER_STARTCONTROLLER_H_

#include <memory>
#include <controller/OperationController.h>
#include <controller/OperationControllerVisitor.h>

namespace controller {

class StartController: OperationController, std::enable_shared_from_this<
		StartController> {
public:
	StartController(std::shared_ptr<model::Game> game) :
			OperationController(game) {
	}
	virtual ~StartController() {
	}
	virtual void accept(std::shared_ptr<OperationControllerVisitor> visitor) {
		visitor->visit(shared_from_this());
	}
};

} /* namespace controller */

#endif /* SRC_CONTROLLER_STARTCONTROLLER_H_ */
