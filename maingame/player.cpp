#include"Player.h"
void Player::Step(MapWorld *map)
{
	
	int x=0;
	cin>>x;
	char a='a';
	cin>>a;
	int type;
	int y=0;
	cin>>type;
	switch(a)
	{
	case 'A':
		y=0;
		break;
	case 'B':
		y=1;
		break;
	case 'C':
		y=2;
		break;
	case 'D':
		y=3;
		break;
	case 'E':
		y=4;
		break;
	case 'F':
		y=5;
		break;
	case 'G':
		y=6;
		break;
	case 'H':
		y=7;
		break;
	case 'I':
		y=8;
		break;
	case 'J':
		y=9;
		break;
	}
	map->SetMap(x,y,type);
}
void Player::Step(MapWorld *map,int x,int y,int type)
{
	map->SetMap(x,y,type);
}