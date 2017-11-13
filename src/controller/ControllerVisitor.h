#ifndef SRC_CONTROLLER_CONTROLLERVISITOR_H_
#define SRC_CONTROLLER_CONTROLLERVISITOR_H_

namespace controller {

class ControllerVisitor {
public:
	virtual ~ControllerVisitor();
	virtual void visit(class StartController*) = 0;
};

} /* namespace controller */

#endif /* SRC_CONTROLLER_CONTROLLERVISITOR_H_ */
