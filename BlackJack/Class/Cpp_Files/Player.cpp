//
// Created by frank on 19.03.2023.
//

#include "Player.h"

Player::Player(const string &name) :
        GenericPlayer(name)
{}
Player::~Player()
{}

bool Player::IsHitting() const
{
    cout << m_Name << ", do you want a hit? (Y/N): ";
    char responce;
    cin >> responce;
    return (responce == 'y' || responce == 'Y');
}

void Player::Win() const
{
    cout << m_Name << " wins.\n";
}

void Player::Lose() const
{
    cout << m_Name << " loses.\n";
}

void Player::Push() const
{
    cout << m_Name << " pushes.\n";
}
