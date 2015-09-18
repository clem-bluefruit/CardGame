#ifndef DECK_DEFINE
#define DECK_DEFINE

#include "Card.h"
#include <string>
#include <vector>

namespace CARDGAME
{
	class Deck
	{
	public:
		Deck();
		Deck(const size_t size);
		size_t DeckSize() const;
	private:
		std::vector<Card*> m_cardDeck;
		const size_t maxDeckSize = 10;
	};
}
#endif