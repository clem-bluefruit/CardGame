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
		void AddCard(const std::string name = "Card");
		void SetMaxDeckSize(size_t size);
		std::string ViewCardName(unsigned int card) const;
	private:
		std::vector<Card*> m_cardDeck;
		const size_t m_initialDeckSize;
		size_t m_maxDeckSize = 0;
		bool DeckLimitReached() const;
	};
}
#endif