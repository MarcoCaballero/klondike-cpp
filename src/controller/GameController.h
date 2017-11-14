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

	Action getAction() const;

	void setAction(Action action);

	GameController* getController();

	/*virtual*/ void accept(ControllerVisitor* visitor);


protected:
	Action action;
};

} /* namespace controller */

#endif /* SRC_CONTROLLER_GAMECONTROLLER_H_ */
