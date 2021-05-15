#include "MyText.h"

MyText::MyText(const char* n) : length(0)
{
	name=new char[strlen(n)+1];
	strcpy(name,n);
}

MyText::~MyText()
{
	delete [] name;
}

char my_uptolow_lowtoup(char c)
{
	if(c<='Z')
		return std::tolower(c);
	else
		return std::toupper(c);
}

MyText* initMyText(const char* n)
{
	MyText* p=new MyText(n);
	return p;
}

bool empty(MyText* T)
{
	if(T->napis==NULL)
		return true;
	else
		return false;
}

char* getCString(MyText* T)
{
	return T->napis; 
}

/*MyText* append(MyText* T, const char* n)
{
	T->length+=strlen(n);
	char* pomoc=new char[T->length+1];
	strcat(pomoc,T->napis);
	strcat(pomoc,n);
	T->napis=pomoc;	
	return T;
}*/

void append(MyText* T, const char* n)
{
	T->length+=strlen(n)+1;
	strcat(T->napis,n);	
}

void nicePrint(MyText* T)
{
	std::cout<<T->name<<"= <";
	puts(T->napis);
	std::cout<<">"<<std::endl;
}

int size(MyText* T)
{
	return T->length;
}

void setChar(MyText* T, int pos, char c)
{
	T->napis[pos]=c;
}

MyText* initMyText(const char* n,MyText* T)
{
	MyText* nowy=new MyText(n);
	nowy->length=T->length;
	strcpy(nowy->napis,T->napis);
	return nowy;
}


void erase(MyText* T,int beg,int end)
{}

void modify(MyText* T, char (*f)(char))
{
	for(int i=0;i<T->length;i++)
	{
		T->napis[i]=f(T->napis[i]);
	}
}

void modify(MyText* T, int (*f)(int))
{
	for(int i=0;i<T->length;i++)
	{
		T->napis[i]=f(T->napis[i]);
	}
}

void clear(MyText* T)
{
	delete [] T->name;
	T->length=0;
}