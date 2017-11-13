#ifndef SRC_CONTROLLER_CONTROLLER_H_
#define SRC_CONTROLLER_CONTROLLER_H_

#include <memory>
#include <model/Game.h>
#include <model/State.h>

namespace controller {

class Controller {
public:
	virtual ~Controller() = default;

	model::State& getState() const {
		return game->getState();
	}
	void setState(model::State state) const {
		game->setState(state);

	}
protected:
	explicit Controller(std::shared_ptr<model::Game> game) {
		this->game = game;
	}
	std::shared_ptr<model::Game> game;

};

} /* namespace controller */

#endif /* SRC_CONTROLLER_CONTROLLER_H_ */
