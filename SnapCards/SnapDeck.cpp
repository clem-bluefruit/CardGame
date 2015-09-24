#include "SnapDeck.h"

using namespace ::std;
using namespace ::CARDGAME;

SnapDeck::SnapDeck(size_t size) :
	m_initialDeckSize(size)
{
	for (size_t i = 0; i < m_initialDeckSize; ++i)
		AddCard();
}

void SnapDeck::AddCard(unsigned int value)
{
	SnapCard* card = new SnapCard(value);
	m_cardDeck.push_back(card);
}