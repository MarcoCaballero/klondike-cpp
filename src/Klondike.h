#ifndef SRC_KLONDIKE_H_
#define SRC_KLONDIKE_H_
#include <memory>
#include <controller/Logic.h>
#include <view/KlondikeView.h>
#include <utils/IOConsoleUtils.h>

class Klondike {
public:
	Klondike();
	virtual ~Klondike();
	void play();
private:
	std::shared_ptr<controller::Logic> logic;
	std::shared_ptr<view::KlondikeView> view;
};

#endif /* SRC_KLONDIKE_H_ */
