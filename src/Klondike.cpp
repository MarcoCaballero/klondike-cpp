#include <iostream>
#include <Klondike.h>
#include <view/KlondikeView.h>


Klondike::Klondike() {
	logic = std::shared_ptr<controller::Logic>(new controller::Logic());
	view = std::shared_ptr<view::KlondikeView>();
}

Klondike::~Klondike() {
}

void Klondike::play() {
	std::shared_ptr<controller::Controller> controller;
	do {
		controller = logic->getController();
	} while (controller != NULL);
}

int main(int argc, char **argv) {

	Klondike().play();

	return EXIT_SUCCESS;
}
