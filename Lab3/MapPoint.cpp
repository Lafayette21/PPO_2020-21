#include "MapPoint.h"


//--------------------MapPoint-----------------------
MapPoint::MapPoint(const char* n,double longi,double lati):longitude(longi),latitude(lati)
{
	length=sizeof(n);
	name=new char[length];
	strcpy(name,n);
}
MapPoint::~MapPoint()
{
	delete [] name;
}

//-----------------Poza klasa-----------------
MapPoint constructMP(const char* n,double longi,double lati)
{
	
	return MapPoint(n,longi,lati);
}
void print(const MapPoint& P)
{
	cout<<"Punkt na mapie < "<<P.name<<" > ma wspolzedne ["<<P.longitude<<" N "<<P.latitude<<" E ]"<<endl;
}
double distance(const MapPoint& P1,const MapPoint& P2)
{
	double x=P1.longitude-P2.longitude;
	double y=P1.latitude-P2.latitude;
	return sqrt(x*x+y*y);
}
void clear(const MapPoint& P)
{
	P.~MapPoint();
}
MapPoint inTheMiddle(const MapPoint& P1,const MapPoint& P2,const char* n)
{
	double x=(P1.longitude+P2.longitude)/2;
	double y=(P1.latitude+P2.latitude)/2;
	return MapPoint(n,x,y);
}

void movePoint(MapPoint& P,double longi,double lati)
{
	P.longitude=longi;
	P.latitude=lati;
}

void clear(int r,MapPoint* tab[])
{
	for(int i=0;i<r;i++)
	{
		tab[i]->~MapPoint();
	}
}