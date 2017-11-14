#include <view/CardView.h>

namespace view {

CardView::CardView(model::Card& card): card(&card){
	this->card = &card;
}

CardView::CardView(const CardView& cardview): card(cardview.card){}

CardView::~CardView() {}

void CardView::write() {
	utils::IOConsoleUtils* utils = utils::IOConsoleUtils::getInstance();
	utils->write("[" + std::to_string(card->getValue()) + ":" + std::to_string(card->getSuit()) + "]");
}
} /* namespace view */
