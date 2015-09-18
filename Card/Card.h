#ifndef CARD_DEFINE
#define CARD_DEFINE

#include <string>

namespace CARDGAME
{

	class Card
	{
	public:
		Card();
		Card(std::string name);
		std::string ShowCardName() const;
	private:
		std::string m_cardName;
	};

}

#endif