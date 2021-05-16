#include "MyGrade.h"

MyGrade::MyGrade()
{}

MyGrade::~MyGrade()
{
	std::cout<<"Delete grade with id "<<id<<std::endl;
}


MyGrade::MyGrade(double grad): grade(grad)
{
	static int x=1;
	id=x;
	x++;
}

void MyGrade::print() const
{
	std::cout<<"[ "<<id<<": "<<grade<<" ]";
}