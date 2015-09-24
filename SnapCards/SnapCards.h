#ifndef SNAPCARDS_DEFINE
#define SNAPCARDS_DEFINE

#include <Card.h>
#include <string>

namespace CARDGAME
{
	class SnapCard : public Card
	{
	public:
		SnapCard(unsigned int value = 1);
		const unsigned int m_cardValue;
	};
}

#endif