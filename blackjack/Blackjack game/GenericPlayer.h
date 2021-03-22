#pragma once
#include "Hand.h"
#include <iostream>
#include <string>

using namespace std;

class GenericPlayer : public Hand
{
	friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);

public:
	GenericPlayer(const std::string& name = "");

	virtual ~GenericPlayer();


	virtual bool isHitting() const = 0; //���������, ����� �� ������ ��� ���� �����. ������ ����������� �������


	bool isBusted() const; //���������, ��� � ������ �������


	void bust() const; // ���������, ��� � ������ �������


protected:
	string m_name;
};