#include "Deck.h"

using namespace ::CARDGAME;
using namespace ::std;

Deck::Deck()
{
	for (size_t i = 0; i < maxDeckSize; ++i)
	{
		Card* card = new Card;
		m_cardDeck.push_back(card);
	}
}

Deck::Deck(const size_t size) :
maxDeckSize(size)
{
	for (size_t i = 0; i < maxDeckSize; ++i)
	{
		Card* card = new Card;
		m_cardDeck.push_back(card);
	}
}

size_t Deck::DeckSize() const
{
	return m_cardDeck.size();
}