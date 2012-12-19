#include"Ship.h"
#define EMSG "Нельзя поставить суда корабль"<<endl

Ship::Ship()
{
	one_deck=4;
	two_deck=3;
	three_deck=2;
	four_deck=1;
}
void Ship::SetShipOnMap(int y,int x,int direct,int type,MapWorld *mp)
{
	/*
	direct:
	0-up
	1-left
	2-down
	3-right
	*/
	if(type==4 && four_deck!=0)
	{
		if(direct==0)
		{		
		try{
			if(mp->map.at(y).at(x)!=1 &&
			 mp->map.at(y-1).at(x)!=1 &&
			 mp->map.at(y-2).at(x)!=1 &&
			 mp->map.at(y-3).at(x)!=1)
			{
				
				mp->SetMap(y,x,1);
				mp->SetMap(y-1,x,1);
				mp->SetMap(y-2,x,1);
				mp->SetMap(y-3,x,1);
				four_deck--;
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
			if(mp->map.at(y).at(x-1)!=1 &&
			 mp->map.at(y).at(x-2)!=1 &&
			 mp->map.at(y).at(x-3)!=1 &&
			 mp->map.at(y).at(x-3)!=1)
			{
				
				mp->SetMap(y,x,1);
				mp->SetMap(y,x-1,1);
				mp->SetMap(y,x-2,1);
				mp->SetMap(y,x-3,1);
				four_deck--;
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
			if(mp->map.at(y).at(x)!=1 &&
			 mp->map.at(y+1).at(x)!=1 &&
			 mp->map.at(y+2).at(x)!=1 &&
			 mp->map.at(y+3).at(x)!=1)
			{
				
				mp->SetMap(y,x,1);
				mp->SetMap(y+1,x,1);
				mp->SetMap(y+2,x,1);
				mp->SetMap(y+3,x,1);
				four_deck--;
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
			if(mp->map.at(y).at(x)!=1 &&
			 mp->map.at(y).at(x+1)!=1 &&
			 mp->map.at(y).at(x+2)!=1 &&
			 mp->map.at(y).at(x+3)!=1)
			{
				
				mp->SetMap(y,x,1);
				mp->SetMap(y,x+1,1);
				mp->SetMap(y,x+2,1);
				mp->SetMap(y,x+3,1);
				four_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}
	}
	/**************************************************/
	if(type==3 && three_deck!=0)
	{
		if(direct==0)
		{		
		try{
			if(mp->map.at(y).at(x)!=1 &&
			 mp->map.at(y-1).at(x)!=1 &&
			 mp->map.at(y-2).at(x)!=1)
			{
				
				mp->SetMap(y,x,1);
				mp->SetMap(y-1,x,1);
				mp->SetMap(y-2,x,1);
				three_deck--;
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
			if(mp->map.at(y).at(x-1)!=1 &&
			 mp->map.at(y).at(x-2)!=1 &&
			 mp->map.at(y).at(x-3)!=1 )
			{
				
				mp->SetMap(y,x,1);
				mp->SetMap(y,x-1,1);
				mp->SetMap(y,x-2,1);
				three_deck--;
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
			if(mp->map.at(y).at(x)!=1 &&
			 mp->map.at(y+1).at(x)!=1 &&
			 mp->map.at(y+2).at(x)!=1)
			{
				
				mp->SetMap(y,x,1);
				mp->SetMap(y+1,x,1);
				mp->SetMap(y+2,x,1);
				three_deck--;
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
			if(mp->map.at(y).at(x)!=1 &&
			 mp->map.at(y).at(x+1)!=1 &&
			 mp->map.at(y).at(x+2)!=1 )
			{
				
				mp->SetMap(y,x,1);
				mp->SetMap(y,x+1,1);
				mp->SetMap(y,x+2,1);
				three_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}
	}
	/**************************************************/
	if(type==2 && two_deck!=0)
	{
		if(direct==0)
		{		
		try{
			if(mp->map.at(y).at(x)!=1 &&
			 mp->map.at(y-1).at(x)!=1)
			{
				
				mp->SetMap(y,x,1);
				mp->SetMap(y-1,x,1);
				two_deck--;
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
			if(mp->map.at(y).at(x-1)!=1 &&
			 mp->map.at(y).at(x-2)!=1 )
			{
				
				mp->SetMap(y,x,1);
				mp->SetMap(y,x-1,1);
				two_deck--;
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
			if(mp->map.at(y).at(x)!=1 &&
			 mp->map.at(y+1).at(x)!=1)
			{
				
				mp->SetMap(y,x,1);
				mp->SetMap(y+1,x,1);
				two_deck--;
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
			if(mp->map.at(y).at(x)!=1 &&
			 mp->map.at(y).at(x+1)!=1  )
			{
				
				mp->SetMap(y,x,1);
				mp->SetMap(y,x+1,1);
				two_deck--;
			}
		}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		}
	}
	/**************************************************/
	if(type==0 && one_deck!=0)
	{
		try{

				if(mp->map.at(y).at(x)!=1)
				{
				
					mp->SetMap(y,x,1);
					one_deck--;
				}
			}
		catch(exception ex)
		{
			cout<<EMSG;
		}
			
		try{
				if(mp->map.at(y).at(x-1)!=1)
				{
				
					mp->SetMap(y,x,1);
					one_deck--;
				}
			}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		
			
		try{
				if(mp->map.at(y).at(x)!=1)
				{
				
					mp->SetMap(y,x,1);
					one_deck--;
				}
			}
		catch(exception ex)
		{
			cout<<EMSG;
		}
				
		try{
				if(mp->map.at(y).at(x)!=1)
				{
				
					mp->SetMap(y,x,1);
					one_deck--;
				}
			}
		catch(exception ex)
		{
			cout<<EMSG;
		}
		
	}

}