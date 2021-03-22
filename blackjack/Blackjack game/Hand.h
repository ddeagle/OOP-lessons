#pragma once
#include "Card.h"
#include <memory>
#include <vector>



class Hand
{
public:
    Hand() { m_cards.reserve(7); } // ��������� ����.������ ��������� �� ������� ���� �ard,����������� ����� ��� �����(7) 
    ~Hand() { clear(); }

    void add(Card* pCard); //��������� ����� � ����.��������� ��������� �� ������ ���� �ard � ������ m_�ards

    void clear(); //������� ���� �� ����. ������� ��� ��������� �� ������� m_�ards, �������� ��� ��������� � ���� ������� � ����
    int getTotal() const; //���������� ����� ����� ���� ����

protected:
    std::vector<Card*> m_cards;
};
