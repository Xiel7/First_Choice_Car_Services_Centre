#include "Technician.h"
#include "Person.h"

#include <fstream>
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
	cin.ignore();
	getline(cin, lName);
	setLastName(lName);

	setID(techID);
}

void Technician::search_by_FName()
{
	/*char FName[20];
	Technician result;
	ifstream file("Text_File.txt");

	cout << "Enter name to find: ";
	cin >> FName;

	if (file.is_open())
	{
		if (!file.eof())
		{
			if (firstName == FName)
			{
				file.read((char*)&FName, sizeof(FName));
				cout << "\n Technician Name:\t" << name;
				cout << "\n Technician ID:\t" << id;
				cout << "\n Position:\t" << position;
				result.print_grade(results);
			}
			else
			{
				cout << "Technician not found.";
			}
		}

		else
		{
			cout << "Unable to open file.";
		}
	}*/
}//help check

void Technician::search_by_LName()
{
	/*char LName[20];
	Technician result;
	ifstream file("Text_File.txt");

	cout << "Enter name to find: ";
	cin >> LName;

	if (file.is_open()) {

		if (!file.eof()) {

			if (lastName == LName) {
				file.read((char*)&LName, sizeof(LName));
				cout << "\n Technician Name:\t" << name;
				cout << "\n Technician ID:\t" << id;
				cout << "\n Position:\t" << position;
				result.print_grade(results);
			}
			else {
				cout << "Technician not found.";
			}
		}

		
	else {
		cout << "Unable to open file.";
	}
	}*/
}

void Technician::search_by_ID()
{
	/*char ID[20];
	Technician result;
	ifstream file("Text_File.txt");

	cout << "Enter name to find: ";
	cin >> ID;

	if (file.is_open()) {

		if (!file.eof()) {

			if (id == ID) {
				file.read((char*)&ID, sizeof(ID));
				cout << "\n Technician Name:\t" << name;
				cout << "\n Technician ID:\t" << id;
				cout << "\n Position:\t" << position;
				result.print_grade(results);
			}
			else {
				cout << "Technician not found.";
			}
		}

		
	else {
		cout << "Unable to open file.";
	}
	}*/
}
