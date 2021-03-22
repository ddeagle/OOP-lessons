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


	virtual bool isHitting() const = 0; //”казывает, нужна ли игроку еще одна карта. „иста€ виртуальна€ функци€


	bool isBusted() const; //”казывает, что у игрока перебор


	void bust() const; // ќбъ€вл€ет, что у игрока перебор


protected:
	string m_name;
};