#include <utils/IOConsoleUtils.h>
#include <utils/MenuDialog.h>
#include <view/KlondikeView.h>
#include <view/BoardView.h>

namespace view {

KlondikeView::KlondikeView() {
}

KlondikeView::~KlondikeView() {
}

void KlondikeView::visit(StartController* startcontroller) {
	BoardView(startcontroller).write();
}
void KlondikeView::interact(Controller* controller) {
	controller->accept(this);
}

} /* namespace controller */
