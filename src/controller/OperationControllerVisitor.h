#ifndef SRC_CONTROLLER_OPERATIONCONTROLLERVISITOR_H_
#define SRC_CONTROLLER_OPERATIONCONTROLLERVISITOR_H_

#include <memory>
#include <controller/StartController.h>

namespace controller {

class OperationControllerVisitor {
public:
	virtual ~OperationControllerVisitor() = default;
	virtual void visit(std::shared_ptr<StartController> controller) = 0 ;
};

} /* namespace controller */

#endif /* SRC_CONTROLLER_OPERATIONCONTROLLERVISITOR_H_ */
