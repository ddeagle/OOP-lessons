#pragma once
#include "Hand.h"
#include "GenericPlayer.h"


class Deck :public Hand
{
public:
	Deck();

	virtual ~Deck();

	void populate();		//—оздает стандартную колоду из 52 карт

	void shuffle();		//“асует карты

	void deal(Hand& aHand);		//–аздает в руку одну карту

	void additionalCards(GenericPlayer& aGenerlcPlayer);		//–аздает игроку дополнительные карты до тех пор, пока он может и хочет их получать

};
