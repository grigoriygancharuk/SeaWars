#include"Player.h"

void Player::SetShipOnMap(int y,int x,int direct,int type,Ship *shp,MapWorld *map)
{
	/*
	direct:
	0-up
	1-left
	2-down
	3-right
	*/
	/*********************####*************************/
	if(type==4 && shp->four_deck!=0)
	{
		if(direct==0)
		{		
		try{
			if(map->map.at(y).at(x)!=1 &&
			 map->map.at(y-1).at(x)!=1 &&
			 map->map.at(y-2).at(x)!=1 &&
			 map->map.at(y-3).at(x)!=1)
			{
				
				map->SetMap(y,x,1);
				map->SetMap(y-1,x,1);
				map->SetMap(y-2,x,1);
				map->SetMap(y-3,x,1);
				shp->four_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}

		if(direct==1)
		{		
		try{
			if(map->map.at(y).at(x-1)!=1 &&
			 map->map.at(y).at(x-2)!=1 &&
			 map->map.at(y).at(x-3)!=1 &&
			 map->map.at(y).at(x-3)!=1)
			{
				
				map->SetMap(y,x,1);
				map->SetMap(y,x-1,1);
				map->SetMap(y,x-2,1);
				map->SetMap(y,x-3,1);
				shp->four_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}
		if(direct==2)
		{		
		try{
			if(map->map.at(y).at(x)!=1 &&
			 map->map.at(y+1).at(x)!=1 &&
			 map->map.at(y+2).at(x)!=1 &&
			 map->map.at(y+3).at(x)!=1)
			{
				
				map->SetMap(y,x,1);
				map->SetMap(y+1,x,1);
				map->SetMap(y+2,x,1);
				map->SetMap(y+3,x,1);
				shp->four_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}
		if(direct==3)
		{		
		try{
			if(map->map.at(y).at(x)!=1 &&
			 map->map.at(y).at(x+1)!=1 &&
			 map->map.at(y).at(x+2)!=1 &&
			 map->map.at(y).at(x+3)!=1)
			{
				
				map->SetMap(y,x,1);
				map->SetMap(y,x+1,1);
				map->SetMap(y,x+2,1);
				map->SetMap(y,x+3,1);
				shp->four_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}
	}
	/*********************###**************************/
	if(type==3 && shp->three_deck!=0)
	{
		if(direct==0)
		{		
		try{
			if(map->map.at(y).at(x)!=1 &&
			 map->map.at(y-1).at(x)!=1 &&
			 map->map.at(y-2).at(x)!=1)
			{
				
				map->SetMap(y,x,1);
				map->SetMap(y-1,x,1);
				map->SetMap(y-2,x,1);
				shp->three_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}

		if(direct==1)
		{		
		try{
			if(map->map.at(y).at(x-1)!=1 &&
			 map->map.at(y).at(x-2)!=1 &&
			 map->map.at(y).at(x-3)!=1 )
			{
				
				map->SetMap(y,x,1);
				map->SetMap(y,x-1,1);
				map->SetMap(y,x-2,1);
				shp->three_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}
		if(direct==2)
		{		
		try{
			if(map->map.at(y).at(x)!=1 &&
			 map->map.at(y+1).at(x)!=1 &&
			 map->map.at(y+2).at(x)!=1)
			{
				
				map->SetMap(y,x,1);
				map->SetMap(y+1,x,1);
				map->SetMap(y+2,x,1);
				shp->three_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}
		if(direct==3)
		{		
		try{
			if(map->map.at(y).at(x)!=1 &&
			 map->map.at(y).at(x+1)!=1 &&
			 map->map.at(y).at(x+2)!=1 )
			{
				
				map->SetMap(y,x,1);
				map->SetMap(y,x+1,1);
				map->SetMap(y,x+2,1);
				shp->three_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}
	}
	/*********************##***************************/
	if(type==2 && shp->two_deck!=0)
	{
		if(direct==0)
		{		
		try{
			if(map->map.at(y).at(x)!=1 &&
			 map->map.at(y-1).at(x)!=1)
			{
				
				map->SetMap(y,x,1);
				map->SetMap(y-1,x,1);
				shp->two_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}

		if(direct==1)
		{		
		try{
			if(map->map.at(y).at(x-1)!=1 &&
			 map->map.at(y).at(x-2)!=1 )
			{
				
				map->SetMap(y,x,1);
				map->SetMap(y,x-1,1);
				shp->two_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}
		if(direct==2)
		{		
		try{
			if(map->map.at(y).at(x)!=1 &&
			 map->map.at(y+1).at(x)!=1)
			{
				
				map->SetMap(y,x,1);
				map->SetMap(y+1,x,1);
				shp->two_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}
		if(direct==3)
		{		
		try{
			if(map->map.at(y).at(x)!=1 &&
			 map->map.at(y).at(x+1)!=1  )
			{
				
				map->SetMap(y,x,1);
				map->SetMap(y,x+1,1);
				shp->two_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}
	}
	/*********************#****************************/
	if(type==0 && shp->one_deck!=0)
	{
		try{

				if(map->map.at(y).at(x)!=1)
				{
				
					map->SetMap(y,x,1);
					shp->one_deck--;
				}
			}
		catch(exception ex)
		{
			cout<<EMSG;
		}
			
		try{
				if(map->map.at(y).at(x-1)!=1)
				{
				
					map->SetMap(y,x,1);
					shp->one_deck--;
				}
			}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		
			
		try{
				if(map->map.at(y).at(x)!=1)
				{
				
					map->SetMap(y,x,1);
					shp->one_deck--;
				}
			}
		catch(exception ex)
		{
			cout<<EMSG;
		}
				
		try{
				if(map->map.at(y).at(x)!=1)
				{
				
					map->SetMap(y,x,1);
					shp->one_deck--;
				}
			}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		
	}

}
void Player::DoStep(Ship *shp,MapWorld *map)
{
	int x=0;
	int y=0;
	int statex=0;
	int statey=0;
	char atoy;

	
	cin>>x>>atoy;
	y=int(atoy)-65;
	if(x<0 || x>9)
	{
	cout<<"координата X не верна"<<endl;
	statex=1;
	}
	if(y<0 || y>9)
	{
	cout<<"координата Y не верна"<<endl;
	statey=0;
	}
	if(statex==0 && statey==0)
	map->SetMap(x,y,1);
	
	
}