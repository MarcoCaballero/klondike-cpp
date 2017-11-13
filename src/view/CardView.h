#ifndef SRC_VIEW_CARDVIEW_H_
#define SRC_VIEW_CARDVIEW_H_

#include <utils/IOConsoleUtils.h>
#include <model/Card.h>

namespace view {

class CardView {
public:
	CardView(model::Card& card);
	virtual ~CardView();
	void write();

private:
	model::Card card;
	utils::IOConsoleUtils* utils;
};

} /* namespace view */

#endif /* SRC_VIEW_CARDVIEW_H_ */
