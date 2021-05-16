#include "MyPrint.h"

void MyPrint::init(int s)
{
	stars=s;
}

void MyPrint::printLine() const
{
	static int x=1;
	for(int i=0;i<stars;i++)
	{
		std::cout<<"*";
			
	}
	std::cout<<" "<<x<<" ";
	for(int i=0;i<stars;i++)
	{
		std::cout<<"*";
			
	}
	x++;
	std::cout<<std::endl;
}