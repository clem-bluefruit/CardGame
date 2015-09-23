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

void Deck::AddCard(const string name)
{
	if (!DeckLimitReached())
	{
		Card* card = new Card(name);
		m_cardDeck.push_back(card);
	}
}

void Deck::SetMaxDeckSize(size_t size)
{
	m_maxDeckSize = size;
}

string Deck::ViewCardName(unsigned int card) const
{
	return m_cardDeck.at(card)->ShowCardName();
}

bool Deck::DeckLimitReached() const
{
	if (m_maxDeckSize > 0)
	{
		if (m_maxDeckSize == m_cardDeck.size())
			return true;
	}
	return false;
}