#include "Technician.h"
#include "Person.h"

#include <iostream>
#include <string>

Technician::Technician()
{
	cout << "Technician constructor" << endl;
}

Technician::Technician(string fName, string lName, string techID):Person(fName, lName, techID)
{
	cout << "Technician constructor with param" << endl;
}

void Technician::printInfo()
{
	cout << "Technician Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Technician ID: " << getID() << endl;
}