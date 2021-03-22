#include "Hand.h"


void Hand::add(Card* pCard)
{
    m_cards.push_back(pCard);
}

void Hand::clear()
{
    // �������� �� �������, ���������� ��� ������ � ����
    std::vector<Card*>::iterator iter = m_cards.begin();
    for (iter = m_cards.begin(); iter != m_cards.end(); ++iter)
    {
        delete* iter;
        *iter = 0;
    }
    m_cards.clear();
}


int Hand::getTotal() const
{
    // ���� ���� � ���� ���, ���������� �������� 0
    if (m_cards.empty())
        return 0;

    //���� ������ ����� ����� �������� 0, �� ��� ����� �������� �����
    if (m_cards[0]->getvalue() == 0)
        return 0;

    // ������� ����� ����� ���� ����, ������ ��� ���� 1 ����
    int total = 0;
    std::vector<Card*>::const_iterator iter;
    for (iter = m_cards.begin(); iter != m_cards.end(); ++iter)
    {
        total += (*iter)->getvalue();
    }

    // ����������, ������ �� ���� ���
    bool containsAce = false;
    for (iter = m_cards.begin(); iter != m_cards.end(); ++iter)
    {
        if ((*iter)->getvalue() == Card::ACE)
        {
            containsAce = true;
        }
    }

    // ���� ���� ������ ��� � ����� �������� ���������, ��� ���� 11 �����
    if (containsAce && total <= 11)
    {
        // ��������� ������ 10 �����, ��������� �� ��� ��������
        // �� ������ ��� �� ������ ����
        total += 10;
    }

    return total;
}