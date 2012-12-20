#include"MapWorld.h"
#include"Ship.h"
#define EMSG "Ќельз€ поставить ваше судно в это место"<<endl;
class Player
{
public:
	Player();
	void SetShipOnMap(int y,int x,int direct,int type,Ship *shp,MapWorld *map);
	void DoStep(Ship *shp,MapWorld *map,MapWorld *map2,MapWorld *map3);
};