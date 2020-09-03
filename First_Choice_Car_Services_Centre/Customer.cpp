#include "Customer.h"
#include "Car.h"
#include <iostream>
#include <string>

Customer::Customer()
{
	
}

Customer::Customer(Car custCar, string firstName, string lastName, string custID) : Person(firstName, lastName, custID), customerCar(custCar)
{
	
}

void Customer::printInfo()
{
	cout << "\n";
	cout << "Customer Car: " << customerCar.getCrNo() << endl;
	cout << "Customer Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Customer ID: " << getID() << endl;
	cout << "\n";
}

void Customer::setCustomerCar(Car custCar)
{
	customerCar = custCar;
}
Car Customer::getCustomerCar()
{
	return customerCar;
}