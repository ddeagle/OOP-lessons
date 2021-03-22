#pragma once
#include "Hand.h"
#include "GenericPlayer.h"


class Deck :public Hand
{
public:
	Deck();

	virtual ~Deck();

	void populate();		//������� ����������� ������ �� 52 ����

	void shuffle();		//������ �����

	void deal(Hand& aHand);		//������� � ���� ���� �����

	void additionalCards(GenericPlayer& aGenerlcPlayer);		//������� ������ �������������� ����� �� ��� ���, ���� �� ����� � ����� �� ��������

};
