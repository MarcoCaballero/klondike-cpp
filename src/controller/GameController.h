#ifndef SRC_CONTROLLER_GAMECONTROLLER_H_
#define SRC_CONTROLLER_GAMECONTROLLER_H_

#include <controller/Controller.h>
#include <controller/ControllerVisitor.h>
#include <controller/Action.h>

namespace controller{

class GameController: public Controller  {
public:
	GameController(model::Game* game);

	virtual ~GameController();

	model::Game* getGame();

	void accept(ControllerVisitor* visitor);

	virtual void control() = 0;
};

} /* namespace controller */

#endif /* SRC_CONTROLLER_GAMECONTROLLER_H_ */
