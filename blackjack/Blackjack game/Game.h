#pragma once
#include <string>
#include "Deck.h"
#include "House.h"
#include "Player.h"

class Game
{
public:
    Game(const std::vector<std::string>& names);

    ~Game();

    // проводит игру в Blackjack
    void play();

private:
    Deck m_deck; //Колода карт
    House m_house; //Рука дилера
    std::vector<Player> m_players; //Группа игроков - людей.Вектор, содержащий объекты типа Player
};


