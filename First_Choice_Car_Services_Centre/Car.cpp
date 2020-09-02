#include "Car.h"

#include <iostream>
#include <string>

Car::Car()
{
	cout << "Car constructors" << endl;
}

Car::Car(string crNo)
{
	this->crNo = crNo;
	cout << "Car constructor with para" << endl;
}

void Car::setCrNo(string crNo)
{
	this->crNo = crNo;
}

string Car::getCrNo()
{
	return crNo;
}