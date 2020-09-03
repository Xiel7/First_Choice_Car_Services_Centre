#include "Technician.h"
#include "Person.h"

#include <iostream>
#include <string>

Technician::Technician()
{
	
}

Technician::Technician(string fName, string lName, string techID):Person(fName, lName, techID)
{
	
}

void Technician::printInfo()
{
	cout << "\n";
	cout << "Technician Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Technician ID: " << getID() << endl;
	cout << "\n";
}