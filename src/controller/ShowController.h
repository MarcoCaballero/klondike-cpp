#ifndef SRC_CONTROLLER_SHOWCONTROLLER_H_
#define SRC_CONTROLLER_SHOWCONTROLLER_H_

#include <controller/GameController.h>

namespace controller {

class ShowController: public GameController {
public:
	ShowController(model::Game* game);
	virtual ~ShowController();
	void showNewDeckCard();
	void showNewTableauCard(std::string target);

};

} /* namespace controller */

#endif /* SRC_CONTROLLER_SHOWCONTROLLER_H_ */
