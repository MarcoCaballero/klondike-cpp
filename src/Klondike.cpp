#include <iostream>
#include <Klondike.h>

using namespace controller;
using namespace view;

Klondike::Klondike() {
	logic = new Logic();
	view = new KlondikeView();
}

Klondike::~Klondike() {
}

void Klondike::play() {
	controller::Controller* controller;
	do {
		controller = logic->getController();
		if (controller != NULL) {
			view->interact(controller);
		}
	} while (controller != NULL);
}

int main(int argc, char **argv) {

	Klondike().play();


	return EXIT_SUCCESS;
}
