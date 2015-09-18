#include "Card.h"

using namespace ::CARDGAME;
using namespace ::std;

Card::Card() :
	m_cardName("Card")
{
}

Card::Card(string name) :
	m_cardName(name)
{
}

string Card::ShowCardName() const
{
	return m_cardName;
}