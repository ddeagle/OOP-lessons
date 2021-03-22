#include "GenericPlayer.h"


using namespace std;

GenericPlayer::GenericPlayer(const string& name) :
    m_name(name)
{}

GenericPlayer::~GenericPlayer()
{}

bool GenericPlayer::isBusted() const
{
    return (getTotal() > 21);
}

void GenericPlayer::bust() const
{
    cout << m_name << " you're busted.\n";
}


ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer)
{
    os << aGenericPlayer.m_name << ":\t";

    vector<Card*>::const_iterator pCard;
    if (!aGenericPlayer.m_cards.empty())
    {
        for (pCard = aGenericPlayer.m_cards.begin();
            pCard != aGenericPlayer.m_cards.end();
            ++pCard)
        {
            os << *(*pCard) << "\t";
        }
    }
    else
    {
        os << "<empty>";
    }

    return os;
}