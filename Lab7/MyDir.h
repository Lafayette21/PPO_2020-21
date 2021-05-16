#pragma once
#include <iostream>

using std::string;
using std::cout;
using std::endl;

struct MyDir
{
	string name;
	MyDir** subDir;
	int size;
};

//Procedura przygotowujaca Dir
void initDir(MyDir& , const string& );

//Wypisanie drzewa MyDir
void printDir(MyDir );

//Procedura tworzaca podkatalog w MyDir
MyDir* addDir(MyDir&, const string&);

//Procedura dolaczjaca podkatolog MyDir do katologu typu MyDir
void addDir(MyDir& , MyDir&);

//Procedura czyszczaca katolog MyDir
void clearDir (MyDir & D);