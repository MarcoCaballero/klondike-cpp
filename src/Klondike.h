#ifndef SRC_KLONDIKE_H_
#define SRC_KLONDIKE_H_
#include <controller/Logic.h>
#include <view/KlondikeView.h>
#include <utils/IOConsoleUtils.h>

class Klondike {
public:
	Klondike();
	virtual ~Klondike();
	void play();
private:
	controller::Logic* logic;
	view::KlondikeView* view;
};

#endif /* SRC_KLONDIKE_H_ */
