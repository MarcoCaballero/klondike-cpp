#ifndef SRC_CONTROLLER_SHOWTABLEAUCARDCONTROLLER_H_
#define SRC_CONTROLLER_SHOWTABLEAUCARDCONTROLLER_H_
#include <controller/GameController.h>

namespace controller {

class ShowTableauCardController: public GameController {
public:
	ShowTableauCardController(model::Game* game, std::string target);
	virtual ~ShowTableauCardController();

	void show();

private:
	std::string target;
};

} /* namespace controller */

#endif /* SRC_CONTROLLER_SHOWTABLEAUCARDCONTROLLER_H_ */
