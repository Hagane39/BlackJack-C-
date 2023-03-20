//
// Created by frank on 19.03.2023.
//

#ifndef UNTITLED_HAND_H
#define UNTITLED_HAND_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Card.h"

using namespace std;

class Hand {

    public:
        Hand();

        virtual ~Hand();

        //adds a card to the hand
        void Add(Card* pCard);

        //clears hand of all cards
        void Clear();

        //gets hand total value, intelligently treats aces as 1 or 11
        int GetTotal() const;

    protected:
        vector<Card*> m_Cards;
};


#endif //UNTITLED_HAND_H
