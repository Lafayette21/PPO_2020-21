#pragma once
#include <string.h>
#include <iostream>

struct MyText
{
	//Konstruktor obiektu MyText
	MyText(const char*);
	//Destruktor
	~MyText();
	int length;
	char napis[20];
	char* name;
};

//Procedura zmieniajaca znak z duzego na maly lub odwrotnie
char my_uptolow_lowtoup(char );

//Funkcja tworzaca obiekt MyText*
MyText* initMyText(const char* n);

//Procedura zwracajaca prawda gdy napis w MyText* jest pusty, false gdy nie jest pusty
bool empty(MyText* );

//Procedura zwracajaca napis z MyText*
char* getCString(MyText* );

//Procedura dopisujaca do napisu w obiekcie MyText*
void append(MyText* , const char* );

//Procedura wypisujaca napis z MyText* na ekran
void nicePrint(MyText* );

//Procedura zwracajaca rozmiar napisu w MyText*
int size(MyText* );

//Procedura ustawiajaca znak na pozycji 'pos' na znak 'c' w MyText*
void setChar(MyText* T, int pos, char c);

//Przyslonieta funkcja initMyText kopiujaca T do nowego obiektu MyText*
MyText* initMyText(const char* n,MyText* T);

//Procedura usuwa z napisu w MyText* znaki od beg do end (bez end)
void erase(MyText* T,int beg,int end);

//Procedura modyfikuje napis w MyText funkcja (*f) poprzez przechodzenie przez kazdy znak
void modify(MyText* T, char (*f)(char));

//Procedura modyfikuje napis w MyText funkcja (*f) modyfikowany jest od razu caly napis
void modify(MyText* T, int (*f)(int));

//Procedura usuwajaca napis z MyText*
void clear(MyText* );