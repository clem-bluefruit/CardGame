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
		SnapDeck(size_t size = 0);
		size_t DeckSize() const override;
		size_t RemainingDeckCapacity() const;
		void AddCard(const unsigned int = 1);
		void SetMaxDeckSize(size_t size);
		unsigned int CardValue() const;
	private:
		std::vector<SnapCard*> m_cardDeck;
		const size_t m_initialDeckSize;
		size_t m_maxDeckSize = 0;
		bool DeckLimitReached() const;
	};
}

#endif