#ifndef SRC_CONTROLLER_SHOWCONTROLLER_H_
#define SRC_CONTROLLER_SHOWCONTROLLER_H_

#include <controller/GameController.h>

namespace controller {

class ShowController: public GameController {
public:
	virtual ~ShowController();
	virtual void control() = 0;
};

} /* namespace controller */

#endif /* SRC_CONTROLLER_SHOWCONTROLLER_H_ */
