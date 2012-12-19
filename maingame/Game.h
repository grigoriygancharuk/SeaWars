#include"Ship.h"
class Game
{
public:
	Game();
	void GameInit(MapWorld*,Ship*);
	int GameIsPrepared(MapWorld*,Ship*);
	int GameStart();
	int GameStop();
	char *Winner();
};