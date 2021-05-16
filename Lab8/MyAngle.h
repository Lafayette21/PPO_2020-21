#include <iostream>
#include <math.h>

const double PI=3.14159265358979323846;

class MyAngle
{
public:
	//Ustawienie wartosci kata w radianach 
	void setRadians(double radian);

	//Ustawienie wartosci kata w stopniach
	void setDegrees(double deg);

	//zmiana kata na stopnie
	double toDeg() const;

	//zmiana kata na rad (zwrocenie rad)
	double toRad() const;

	//Ustawienie wartosci kata na podstawie innego obiektu MyAngle
	void setAngle(const MyAngle& other);

	//Dodanie do miary kata wartosci kata z innego MyAngle 
	void addAngle(const MyAngle& other);

	//Zwrócenie wartosci w radianach (rad)
	double getRad() const;
private:
	double rad;
};

//Obliczenie dystansu pomiedzy dwoma katami i zwrocenie jako MyAngle
MyAngle distance(const MyAngle& A1,const MyAngle& A2);