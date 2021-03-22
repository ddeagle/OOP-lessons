#include "Card.h"

using namespace std;


Card::Card(rank r /*=Ace default*/, suite s, bool ifu )
	:m_cardrank(r), m_cardsuite(s), m_isFaceUp(ifu){}

int Card::getvalue() const
{
	int value = 0;
	if (m_isFaceUp)
	{
		value = m_cardrank;
		if (value > 10)
		{
			value = 10;
		}

	}
	return value;
}


ostream& operator<<(ostream& os, const Card& aCard)
{
    const string RANKS[] = { "0", "ACE", "2", "3", "4", "5", "6", "7", "8", "9",
        "10", "JACK", "QUEEN", "KING" };
    const string SUITS[] = { "CLUBS", "DIAMONS", "HEARTS", "SPADES" };

    if (aCard.m_isFaceUp)
    {
        os << RANKS[aCard.m_cardrank] << SUITS[aCard.m_cardsuite];
    }
    else
    {
        os << "XX";
    }

    return os;
}