#include "Car.h"

#include <iostream>
#include <string>

Car::Car()
{
	
}

Car::Car(string crNo, string crMode, string crColor)
{
	this->crNo = crNo;
	this->crMode = crMode;
	this->crColor = crColor;
}

void Car::printInfo()
{
	cout << "Car Registration: " << crNo << endl;
	cout << "Car Model: " << crMode << endl;
	cout << "Car Colour: " << crColor << endl;
}


void Car::registerCar()
{
	cout << "Enter Car Registration number: ";
	cin.ignore();
	getline(cin,crNo);
	cout << "Enter Car Model: ";
	getline(cin, crMode);
	cout << "Enter's Car Colour: ";
	getline(cin,crColor);

}

//set gets
void Car::setCrNo(string crNo)
{
	this->crNo = crNo;
}

string Car::getCrNo()
{
	return crNo;
}

void Car::setCrMode(string crMode)
{
	this->crMode = crMode;
}

string Car::getCrMode()
{
	return crMode;
}

void Car::setCrColor(string crColor)
{
	this->crColor = crColor;
}

string Car::getCrColor()
{
	return crColor;
}
