#include <utils/IOConsoleUtils.h>
#include <utils/MenuDialog.h>
#include <view/KlondikeView.h>
#include <view/BoardView.h>
#include <view/MenuView.h>

namespace view {

KlondikeView::KlondikeView() {
}

KlondikeView::~KlondikeView() {
}

void KlondikeView::interact(Controller* controller) {
	controller->accept(this);
}

void KlondikeView::visit(StartController* startController) {
	BoardView(startController).write();
	startController->setState(model::State::IN_GAME);
}

void KlondikeView::visit(GameController* gameController) {
	utils::IOConsoleUtils::getInstance()->writeln("Started");
	MenuView(gameController).write();
	gameController->setState(model::State::FINAL);
}

} /* namespace controller */
