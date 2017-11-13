#ifndef SRC_VIEW_KLONDIKEVIEW_H_
#define SRC_VIEW_KLONDIKEVIEW_H_

#include <controller/ControllerVisitor.h>
#include <controller/Controller.h>

using namespace controller;

namespace view {

class KlondikeView: public ControllerVisitor {
public:
	KlondikeView();
	virtual ~KlondikeView();
	/*virtual*/ void visit(StartController*);
	void interact(Controller*);
};

} /* namespace controller */

#endif /* SRC_VIEW_KLONDIKEVIEW_H_ */
