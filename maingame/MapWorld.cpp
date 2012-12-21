#include"MapWorld.h"
MapWorld::MapWorld()
{
	
	map.resize(10);
	for(vector<vector<int>>::iterator i=map.begin();i!=map.end();i++)
	{
		(*i).resize(10);
		for(vector<int>::iterator j=(*i).begin();j!=(*i).end();j++)
		{
			*j=0;

		}
	}
}
MapWorld::~MapWorld()
{
	
}
void MapWorld::Show()
{
	cout<<"  0123456789"<<endl;
	char symbol='A';
	for(vector<vector<int>>::iterator i=map.begin();i!=map.end();i++)
	{
		cout<<symbol++<<" ";
		for(vector<int>::iterator j=(*i).begin();j!=(*i).end();j++)
		{
			switch(*j)
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
		cout<<endl;
	}
}