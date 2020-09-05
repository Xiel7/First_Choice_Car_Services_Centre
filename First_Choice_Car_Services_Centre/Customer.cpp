#include "Customer.h"
#include "Car.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

Customer::Customer()
{
	
}

Customer::Customer(Car custCar, string firstName, string lastName, string custID, string phoneNo, char gender) : Person(firstName, lastName, custID), customerCar(custCar)
{
	
}

void Customer::printInfo()
{
	cout << "\n";
	cout << "Customer Car: "<< endl;
	customerCar.printInfo();
	cout << "Customer Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Customer ID: " << getID() << endl;
	cout << "\n";
}

void Customer::registerCustomer(int size)
{
	string fName, lName, custID;
	string num;

	stringstream ss;
	ss << setw(4) << setfill('0') << size;
	num = ss.str();

	custID = abbrev + num;
	setID(custID);

	cout << "Enter Customer's first name: ";
	cin.ignore();
	getline(cin, fName);
	setFirstName(fName);

	cout << "Enter Customer's last name: ";
	getline(cin, lName);
	setLastName(lName);

	cout << "Enter Customer's Phone Number: ";
	cin >> phoneNo;
	cout << "Enter Customer's Gender: ";
	cin >> gender;

	customerCar.registerCar();
}


//set gets

void Customer::setCustomerCar(Car custCar)
{
	customerCar = custCar;
}
Car Customer::getCustomerCar()
{
	return customerCar;
}


void Customer::setPhoneNo(string phoneNo)
{
	this->phoneNo = phoneNo;
}

string Customer::getPhoneNo()
{
	return phoneNo;
}

void Customer::setGender(char gender)
{
	this->gender = gender;
}

char Customer::getGender()
{
	return gender;
}