#include<vector>
#include<iterator>
#include<iostream>
using namespace std;
class MapWorld
{
public:
	MapWorld(){};
	void				SetMap(int,int,int);
	void				ShowMap();
	void				InitMap();
	vector<vector<int>> map;


	

	
};