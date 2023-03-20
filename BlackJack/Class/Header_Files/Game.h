//
// Created by frank on 19.03.2023.
//

#ifndef BLACKJACK_GAME_H
#define BLACKJACK_GAME_H

#include "include.h"

class Game
{
public:
    Game(const vector<string>& names);

    ~Game();

    //plays the game of blackjack
    void Play();

private:
    Deck m_Deck;
    House m_House;
    vector<Player> m_Players;

};


#endif //BLACKJACK_GAME_H
