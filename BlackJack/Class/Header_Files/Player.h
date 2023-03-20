//
// Created by frank on 19.03.2023.
//

#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Card.h"
#include "Hand.h"
#include "GenericPlayer.h"


using namespace std;


class Player : public GenericPlayer

{
public:
    Player(const string& name = "");

    virtual ~Player();

    //returns whether or not the player wants another hit

    virtual bool IsHitting() const;

    //announces that the player wins
    void Win() const;

    //announces that the player loses
    void Lose() const;

    //announces that the player pushes
    void Push() const;
};



#endif //BLACKJACK_PLAYER_H
