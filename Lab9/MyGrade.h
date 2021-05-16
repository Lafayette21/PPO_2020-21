#pragma once
#include <iostream>

class MyGrade
{
public:
	//Konstruktor domyslny
	MyGrade();
	//Destruktor
	~MyGrade();
	//Konstktor tworzacy obiekt MyGrade 
	MyGrade(double grad);
	//Wypisanie id i grade
	void print() const;
	//zwraca ocene
	double getgrade() const {return grade;} ;
private:
	double grade;
	int id;

};