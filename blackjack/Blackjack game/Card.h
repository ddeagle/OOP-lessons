#pragma once
#include <iostream>


class Card
{

public:
	//����� ����� (�����, �����, ����� � ����). suit � ��� ������������, ���������� ������ ��������� �����	
	enum suite { CLUBS, HEARTS, DIAMONDS, SPADES };

	//�������� ����� (���, ������, ������ � ��� �����). rank � ��� ������������, ���� ������ ��� 13 ��������
	enum rank
	{
		ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
	};

	Card(rank r = ACE, suite s = SPADES, bool ifu = true);

	//���������� �������� �����
	int getvalue() const;
	
	//�������������� �����. ����� �������������� ��� ����, ����� ����������� ����� ����� ����� ��� ����
	//���������, ��� ����������� ����� � ����� ����� ��� ��������. ������ �� ��, ������������ ��� ��� ���
	void flip() { m_isFaceUp = !(m_isFaceUp); }		

	friend std::ostream& operator<<(std::ostream& os, const Card& aCard);

private:
	rank m_cardrank;
	suite m_cardsuite;
	bool m_isFaceUp; 
};

std::ostream& operator<<(std::ostream& os, const Card& aCard);