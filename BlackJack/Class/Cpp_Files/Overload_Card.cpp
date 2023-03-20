//
// Created by frank on 19.03.2023.
//

#include "OC.h"

//overloads << operator so Card object can be sent to cout
ostream& operator<< (ostream& os,const Card& aCard)
{
    const string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    const string SUITS[] = {"c", "d", "h", "s"};

    if (aCard.m_IsFaceUp)
    {
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    } else
    {
        os << "XX";
    }
    return os;
}