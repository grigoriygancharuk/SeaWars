#include"Player.h"
int main()
{
	setlocale(LC_ALL,"");
	MapWorld *map=new MapWorld();//your map
	MapWorld *map2=new MapWorld();//your step map
	MapWorld *map3=new MapWorld();//enemy map
	Ship *shp=new Ship();//you ship!
	Ship *shp2=new Ship();//enemy ship
	Player *pl=new Player();//you!
	Player *en=new Player();//enemy
	

	system("PAUSE");
	cin.get();
	return 0;
}