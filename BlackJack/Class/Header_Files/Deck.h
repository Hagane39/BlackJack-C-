//
// Created by frank on 19.03.2023.
//

#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H

#include "include.h"

class Deck : public Hand
{
public:
    Deck();

    virtual ~Deck();

    //create a standard deck of 52 cards
    void Populate();

    //shuffle cards
    void Shuffle();

    //deal one card to a hand
    void Deal (Hand& aHand);

    //give additional cards to a generic player
    void AdditionalCards (GenericPlayer& aGenericPlayer);
};


#endif //BLACKJACK_DECK_H
