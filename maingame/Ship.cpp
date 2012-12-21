#include"Ship.h"
Ship::Ship()
{
	oneDeck=4;
	twoDeck=3;
	threeDeck=2;
	fourDeck=1;
}
Ship::~Ship()
{
}
int Ship::GetDeckState(int who)
{
	switch(who)
	{
	case 1:
		return oneDeck;
		break;
	case 2:
		return twoDeck;
		break;
	case 3:
		return threeDeck;
		break;
	case 4:
		return fourDeck;
		break;
	default:
		return -1;
	}
}