#ifndef SNAPDECK_DEFINED
#define SNAPDECK_DEFINED

#include "SnapCards.h"
#include <Card.h>
#include <Deck.h>
#include <vector>

namespace CARDGAME
{
	class SnapDeck : public Deck
	{
	public:
	private:
		std::vector<SnapCard*> m_snapDeck;
	};
}

#endif