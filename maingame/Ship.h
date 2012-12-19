#include"MapWorld.h"

class Ship
{
public:
	Ship();
	void SetShipOnMap(int x,int y,int direct,int type,MapWorld *map);
	int four_deck;
	int three_deck;
	int two_deck;
	int one_deck;
		/*
		SetShipOnMap:
		x -      coordinat x;
		y -      coordinat y;
		direct - direction;
		type :
		1 - one-decked
		2 - two-decked 
		map - it is map :)
		etc
		*/
};