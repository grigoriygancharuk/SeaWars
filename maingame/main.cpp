#include"MapWorld.h"
int main()
{
	setlocale(LC_ALL,"");

	MapWorld *map=new MapWorld();//your map
	map->Show();

	system("PAUSE");
	cin.get();
	return 0;
}