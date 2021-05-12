#include "minermgr.h"
#include <iostream>
#include <string>
#include <list>
#include <memory>
using namespace std;

minermgr::minermgr(){}




void minermgr::addMiner(int number,string resource)
{
	
	//in list I am putting pointers rather than objects themselves
	if(resource == "water")
	{
		water * obj=new water(number,resource);		
		minerList.push_back(obj);
	}
	else if(resource == "chloride")
	{
		chloride *obj=new chloride(number,resource);
		minerList.push_back(obj);
	}
	else if(resource =="iron")
	{
		iron *obj=new iron(number,resource);
		minerList.push_back(obj);
	}
	else if(resource == "magnesium")
	{
		magnesium *obj=new magnesium(number,resource);
		minerList.push_back(obj);
	}
	else if(resource == "potassium")
	{
		potassium* obj=new potassium(number,resource);
		minerList.push_back(obj);
	}
	else if(resource=="silicon")
	{
		silicon* obj=new silicon(number,resource);
		minerList.push_back(obj);
	}
	else if(resource == "sodium")
	{
		sodium* obj=new sodium(number,resource);
		minerList.push_back(obj);
		
	}
	else{}	

}
void minermgr::runMiners()
{
	//I think my problem is here ...
	list<miner*>::iterator it; // declaration might be a problme here
	list<miner*>::iterator temp;
	cout<<"== Boston Station Miner Manager ==\n\n"
	<<"Authenticating with Van Halen facilities...\n"
	<<"Connected and registered.\n======";
	
  while(!minerList.empty()){
	for(it=minerList.begin();it != minerList.end();++it)
	{
	
	    if(!(*it)->isFull())
	     {
			cout<<"\n== Command: start\n";
			(*it)->start();	
	  	try{
			cout<<"== Command: detect\n";
			(*it)->detect();
			cout<<"== Command: collect\n";
			(*it)->collect();
		  
			cout<<"== Command: stop\n";
	
			(*it)->stop();
		   }
	 	 catch(exceptionclass exp)
			{
			cout<<"Miner #"<<exp.getId()
			<<"(type: "<<exp.getType()
			<<") has broken !\n";
	
			delete (*it);	
			it=minerList.erase(it);
			--it;


		}
	    }
	
		 else
		{	
		
		//(*it)->start();

			delete (*it);	
			it=minerList.erase(it);
			--it;
				
			
		}
		}

}
}
	// no need to have destructor for (*it)
/*
minermgr::~minermgr()
	
	list<miner*>::iterator it;

	for(it=minerList.begin();it !=minerList.end();++it)
	{
		delete (*it);		
	}
	
}
*/
