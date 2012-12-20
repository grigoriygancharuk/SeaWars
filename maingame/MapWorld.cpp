#include"MapWorld.h"
MapWorld::MapWorld()
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
void MapWorld::SetMap(int y,int x,int status)
{
	/*
	status:
	0 == water
	1 == ship
	2 == checked
	3 == killcheck
	*/
	map[y][x]=status;
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
			switch(*its)
			{
			case 0:
				cout<<"O";
				break;
			case 1:
				cout<<"#";
			    break;
			case 2:
				cout<<"+";
				break;
			case 3:
				cout<<"X";
				break;
			}
		}
		i++;
		cout<<endl;
		
	}
}
