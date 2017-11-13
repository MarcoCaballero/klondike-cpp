#ifndef SRC_CONTROLLER_OPERATIONCONTROLLER_H_
#define SRC_CONTROLLER_OPERATIONCONTROLLER_H_


#include <memory>
#include "../controller/Controller.h"
#include "../controller/OperationControllerVisitor.h"

namespace controller {

class OperationController: public Controller {
public:
	explicit OperationController(std::shared_ptr<model::Game> game): OperationController::Controller(game) {
		this->game = game;
	}
	virtual ~OperationController() {}

	virtual void accept(std::shared_ptr<OperationControllerVisitor> visitor) = 0;
};

} /* namespace controller */

#endif /* SRC_CONTROLLER_OPERATIONCONTROLLER_H_ */
