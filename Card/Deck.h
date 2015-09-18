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
		Deck(size_t size = 10);
		size_t DeckSize() const;
		void AddCard();
	private:
		std::vector<Card*> m_cardDeck;
		const size_t m_initialDeckSize;
	};
}
#endif