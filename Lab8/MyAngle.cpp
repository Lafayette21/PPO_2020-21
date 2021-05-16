#include "MyAngle.h"

void MyAngle::setRadians(double radian)
{
	if(radian>0)
	{
		while(radian>2*PI)
			radian-=2*PI;
	}
	else
	{
		while(radian<0 && radian<2*PI)
			radian+=2*PI;
	}
	rad=radian;

}
void MyAngle::setDegrees(double deg)
{
	if(deg>0)
	{
		while(deg>360)
			deg-=360;
	}
	else
	{
		while(deg<0 && deg<360)
			deg+=360;
	}
	rad=deg*PI/180;	
}

double MyAngle::toDeg() const
{
	return rad*180/PI;
}

double MyAngle::toRad() const
{
	return rad;
}

void MyAngle::setAngle(const MyAngle& other)
{
	rad=other.toRad();
}

void MyAngle::addAngle(const MyAngle& other)
{
	rad+=other.toRad();
}

double MyAngle::getRad() const
{
	return rad;
}

MyAngle distance(const MyAngle& A1,const MyAngle& A2)
{
	MyAngle Dis;
	double angle=A1.getRad()-A2.getRad();
	if (angle > PI)
    	angle = fabs(angle - 2*PI);
	Dis.setRadians(angle);
	return Dis;
}