#ifndef SRC_CONTROLLER_MOVECONTROLLER_H_
#define SRC_CONTROLLER_MOVECONTROLLER_H_
#include <controller/GameController.h>

namespace controller {

class MoveController: public GameController {
public:
	MoveController(model::Game* game);
	virtual ~MoveController();

	void move(std::string origin, std::string target);
	void move(std::string origin, std::string target, int length);

	void control();
};

} /* namespace controller */

#endif /* SRC_CONTROLLER_MOVECONTROLLER_H_ */
