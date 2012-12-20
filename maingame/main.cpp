#include"Player.h"
int main()
{
	setlocale(LC_ALL,"");
	MapWorld *map=new MapWorld();
	Ship *shp=new Ship();
	Player *pl=new Player();
	map->InitMap();
	pl->DoStep(shp,map);
	
	map->ShowMap();
	system("PAUSE");
	cin.get();
	return 0;
}