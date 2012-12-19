#include"Ship.h"
int main()
{
	setlocale(LC_ALL,"");
	MapWorld *mpP=new MapWorld();//map Player
	MapWorld *mpE=new MapWorld();//map Enemy
	Ship *shp=new Ship();
	
	mpP->InitMap();
	mpP->ShowMap();
	shp->SetShipOnMap(5,6,3,4,mpP);
	shp->SetShipOnMap(0,9,0,4,mpP);
	//mpE->InitMap();

	mpP->ShowMap();
	cin.get();
	return 0;
}