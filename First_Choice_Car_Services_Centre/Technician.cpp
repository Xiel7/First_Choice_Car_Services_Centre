#include "Technician.h"
#include "Person.h"

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

Technician::Technician()
{
	
}

Technician::Technician(string fName, string lName, string techID):Person(fName, lName, techID)
{
	
}

void Technician::printInfo()
{
	cout << "\n";
	cout << "Technician" << endl;
	cout << "----------" << endl;
	cout << "Technician Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Technician ID: " << getID() << endl;
	cout << "\n";
}

void Technician::registerTechnician(int size)
{
	string fName, lName, techID;
	string num;

	stringstream ss;
	ss << setw(4) << setfill('0') << size;
	num = ss.str();

	techID = abbrev + num;
	cout << "Enter Technician's first name: ";
	cin.ignore();
	getline(cin, fName);
	setFirstName(fName);
	
	cout << "Enter Technician's last name: ";
	getline(cin, lName);
	setLastName(lName);

	setID(techID);
}

