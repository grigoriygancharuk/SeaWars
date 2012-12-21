#include<vector>
#include<iostream>
#include<iterator>
using namespace std;
class MapWorld
{
public:
	MapWorld();
	virtual ~MapWorld();
	void Show();
private:
	vector<vector<int>> map;
	
};