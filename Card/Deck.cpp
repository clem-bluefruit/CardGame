#include "Deck.h"

using namespace ::CARDGAME;
using namespace ::std;

Deck::Deck(size_t size) :
	m_initialDeckSize(size)
{
	for (size_t i = 0; i < m_initialDeckSize; ++i)
		AddCard();
}

size_t Deck::DeckSize() const
{
	return m_cardDeck.size();
}

void Deck::AddCard()
{
	Card* card = new Card;
	m_cardDeck.push_back(card);
}