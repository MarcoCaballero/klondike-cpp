#ifndef SRC_CONTROLLER_LOGIC_H_
#define SRC_CONTROLLER_LOGIC_H_

#include <memory>
#include <model/Game.h>
#include <controller/Controller.h>
#include <controller/StartController.h>

using namespace model;

namespace controller {

class Logic {
public:
	Logic();
	virtual ~Logic();
	Controller* getController();
private:
	Game* game;
	StartController* startController;

};

} /* namespace model */

#endif /* SRC_CONTROLLER_LOGIC_H_ */
