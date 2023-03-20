//
// Created by frank on 19.03.2023.
//

#ifndef BLACKJACK_HOUSE_H
#define BLACKJACK_HOUSE_H
#include "include.h"

class House : public GenericPlayer
{
public:
    House(const string& name= "House");

    virtual ~House();

    //indicates whether house is hitting - will always hit on 16 or less
    virtual bool IsHitting() const;

    //flips over first card
    void FlipFirstCard();
};


#endif //BLACKJACK_HOUSE_H
