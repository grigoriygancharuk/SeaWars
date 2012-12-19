#include"Game.h"
Game::Game()
{
}
void Game::GameInit(MapWorld*map,Ship *ship)
{
	
}
int GameIsPrepared(MapWorld *map,Ship *ship)
{
	if(ship->four_deck==0 &&
		ship->three_deck==0 &&
		ship->two_deck==0 &&
		ship->one_deck==0)
	{
		return 1;//game is prepared
	}
	return 0;//not prepared
}