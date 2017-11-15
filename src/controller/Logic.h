#ifndef SRC_CONTROLLER_LOGIC_H_
#define SRC_CONTROLLER_LOGIC_H_

#include <controller/GameControllerSelector.h>
#include <memory>
#include <model/Game.h>
#include <controller/StartController.h>

using namespace model;

namespace controller {

class Logic {
public:
	Logic();
	virtual ~Logic();
	GameController* getController();
private:
	Game* game;
	StartController* startController;
	GameControllerSelector* gameControllerSelector;

};

} /* namespace model */

#endif /* SRC_CONTROLLER_LOGIC_H_ */
