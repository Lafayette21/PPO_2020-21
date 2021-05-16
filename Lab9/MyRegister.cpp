#include "MyRegister.h"

MyRegister::MyRegister(int s): size(s),number(0)
{
	reg = new MyGrade[s];
}

MyRegister::~MyRegister()
{
	std::cout<<"Delete register with "<<number<<"/"<<size<<" grades"<<std::endl;
}

void MyRegister::addGrade(MyGrade* grad)
{
	number++;
	static int i=0;
	if(number>size)
	{
		std::cout<<"The limit of 5 grades has been reached!"<<std::endl;
		delete grad;
	}
	else
	{
		reg[i]=*grad;
		i++;
	}
	
}
void MyRegister::showRegister() const
{
	std::cout<<"Register "<<number<<"/"<<size<<": ";
	for(int i=0;i<number;i++)
	{
		reg[i].print();
		std::cout<<" ";
	}
	std::cout<<std::endl;
}

void MyRegister::clearRegister()
{
	delete [] reg;
	number=0;
}

const MyRegister* MyRegister::backup() const
{
	MyRegister* help=new MyRegister(number);
	for(int i=0;i<number;i++)
	{
		//double x= reg[i].getgrade();
		//help->addGrade(new MyGrade(x));
		help->reg[i]=reg[i];
	}
	return help;
}