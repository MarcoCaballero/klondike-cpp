#include <view/CardView.h>

namespace view {

CardView::CardView(model::Card& card) {
	this->card = card;
	utils = utils::IOConsoleUtils::getInstance();
}

CardView::~CardView() {
	// TODO Auto-generated destructor stub
}
void CardView::write() {
	utils->writeln("[" + std::to_string(card.getValue()) + ":" + std::to_string(card.getSuit()) + "]");
}
} /* namespace view */
