#ifndef SRC_CONTROLLER_SHOWDECKCARDCONTROLLER_H_
#define SRC_CONTROLLER_SHOWDECKCARDCONTROLLER_H_

#include <controller/ShowController.h>
#include <controller/Controller.h>

namespace controller {

class ShowDeckCardController: public ShowController {
public:
	ShowDeckCardController(model::Game* game);
	virtual ~ShowDeckCardController();

	void show();

};

} /* namespace controller */

#endif /* SRC_CONTROLLER_SHOWDECKCARDCONTROLLER_H_ */
