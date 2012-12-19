#include"MapWorld.h"
void MapWorld::SetMap(int y,int x,int status)
{
	/*
	status:
	0 == water
	1 == ship
	*/
	
	map[y][x]=status;
	
}

void MapWorld::InitMap()
{
	map.resize(10);
	for(vector<vector<int>>::iterator it=map.begin();it!=map.end();it++)
	{
		(*it).resize(10);
		for(vector<int>::iterator its=(*it).begin();its!=(*it).end();its++)
		{
			
			*its=0;
		}
		
	}
}
void MapWorld::ShowMap()
{
	
	int i=0;
	cout<<"  ABCDEFGHIJ"<<endl;
	for(vector<vector<int>>::iterator it=map.begin();it!=map.end();it++)
	{
		cout<<i<<" ";
		for(vector<int>::iterator its=(*it).begin();its!=(*it).end();its++)
		{
			cout<<*its;
		}
		i++;
		cout<<endl;
		
	}
}