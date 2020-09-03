#include "Car.h"

#include <iostream>
#include <string>

Car::Car()
{
	
}

Car::Car(string crNo)
{
	this->crNo = crNo;
	
}

void Car::setCrNo(string crNo)
{
	this->crNo = crNo;
}

string Car::getCrNo()
{
	return crNo;
}