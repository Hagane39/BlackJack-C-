//
// Created by frank on 19.03.2023.
//

#include "OP.h"

//overload << operator so a GenericPlayer object can be sent to cout
ostream& operator<< (ostream& os,const GenericPlayer& aGenericPlayer)
{
    os << aGenericPlayer.m_Name << ":\t";

    vector<Card*>::const_iterator  pCard;

    if (!aGenericPlayer.m_Cards.empty())
    {
        for (pCard = aGenericPlayer.m_Cards.begin(); pCard != aGenericPlayer.m_Cards.end(); ++pCard)
        {
            os << *(*pCard) << "\t";
        }

        if (aGenericPlayer.GetTotal() != 0)
        {
            cout << "(" <<aGenericPlayer.GetTotal() << ")";
        }
    } else
    {
        os << "<empty>";
    }
    return os;
}