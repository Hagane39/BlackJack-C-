//
// Created by frank on 19.03.2023.
//

#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(const string &name) :
        m_Name(name)
{}

GenericPlayer::~GenericPlayer()
{}

bool GenericPlayer::IsBusted() const
{
    return (GetTotal() > 21);
}

void GenericPlayer::Bust() const
{
    cout << m_Name << " busts.\n";
}
