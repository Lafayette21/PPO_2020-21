#pragma once
#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

class MapPoint
{
public:
	//Metody
	MapPoint(const char* n,double longi,double lati);
	~MapPoint();
	//void SetLong(double x) const;
	//{longitude=x;}
	//void SetLati(double x) const;
	//{latitude=x;}
	//Skladniki
	double longitude,latitude;
	char* name;
	int length;
};

void clear(const MapPoint& P);

void print(const MapPoint& P);

double distance(const MapPoint& P1,const MapPoint& P2);

MapPoint constructMP(const char* n,double longi,double lati);

MapPoint inTheMiddle(const MapPoint& P1,const MapPoint& P2,const char* n);

void movePoint(MapPoint& P,double longi,double lati);

void clear(int r,MapPoint* tab[]);


