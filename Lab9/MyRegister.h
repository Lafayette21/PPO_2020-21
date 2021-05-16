#pragma once
#include "MyGrade.h"

class MyRegister
{
public:
	//Konsturktor tworzy MyRegister o size==s
	MyRegister(int s);
	//Destriktor
	~MyRegister();
	//Dodawanie oceny MyRegister
	void addGrade(MyGrade* );
	//Wypisanie reg z MyRegister
	void showRegister() const;
	//Stworzenie kopii MyRegister
	const MyRegister* backup() const;
	//Usuniecie MyRegister
	void clearRegister();
private:
	int size;
	int number;
	MyGrade* reg;
};
