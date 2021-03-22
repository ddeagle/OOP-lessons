#pragma once
#include <iostream>


class Card
{

public:
	//Масть карты (трефы, бубны, червы и пики). suit — это перечисление, содержащее четыре возможные масти	
	enum suite { CLUBS, HEARTS, DIAMONDS, SPADES };

	//Значение карты (туз, двойка, тройка и так долее). rank — это перечисление, куда входят все 13 значений
	enum rank
	{
		ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
	};

	Card(rank r = ACE, suite s = SPADES, bool ifu = true);

	//Возвращает значение карты
	int getvalue() const;
	
	//Переворачивает карту. Может использоваться для того, чтобы перевернуть карту лицом вверх или вниз
	//Указывает, как расположена карта — вверх лицом или рубашкой. Влияет на то, отображается она или нет
	void flip() { m_isFaceUp = !(m_isFaceUp); }		

	friend std::ostream& operator<<(std::ostream& os, const Card& aCard);

private:
	rank m_cardrank;
	suite m_cardsuite;
	bool m_isFaceUp; 
};

std::ostream& operator<<(std::ostream& os, const Card& aCard);