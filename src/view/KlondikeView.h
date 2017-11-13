#ifndef SRC_VIEW_KLONDIKEVIEW_H_
#define SRC_VIEW_KLONDIKEVIEW_H_

#include <iostream>
#include <memory>
#include <controller/StartController.h>
#include <controller/OperationController.h>
#include <controller/OperationControllerVisitor.h>

namespace view {

class KlondikeView: public controller::OperationControllerVisitor,
		std::enable_shared_from_this<KlondikeView> {
public:
	KlondikeView() {
	}
	virtual ~KlondikeView() {
	}
	virtual void visit(std::shared_ptr<controller::StartController> controller) {
		controller->accept(shared_from_this());
	}
	void interact(std::shared_ptr<controller::OperationController> controller) {
		std::cout << ("Hello");
	}
};

} /* namespace view */

#endif /* SRC_VIEW_KLONDIKEVIEW_H_ */
