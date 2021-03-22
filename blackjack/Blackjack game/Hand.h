#pragma once
#include "Card.h"
#include <memory>
#include <vector>



class Hand
{
public:
    Hand() { m_cards.reserve(7); } // Коллекция карт.Хранит указатели на объекты типа Сard,резервируем место под карты(7) 
    ~Hand() { clear(); }

    void add(Card* pCard); //Добавляет карту в руку.Добавляет указатель на объект типа Сard в вектор m_Сards

    void clear(); //Очищает руку от карт. Удаляет все указатели из вектора m_Сards, устраняя все связанные с ними объекты в куче
    int getTotal() const; //Возвращает сумму очков карт руки

protected:
    std::vector<Card*> m_cards;
};
