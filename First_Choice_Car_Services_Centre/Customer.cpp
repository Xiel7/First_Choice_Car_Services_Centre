#include "Customer.h"
#include "Car.h"
#include <iostream>
#include <string>

Customer::Customer()
{
	cout << "Customer constructors" << endl;
}


Customer::Customer(Car custCar, string firstName, string lastName, string custID) : Person(firstName, lastName, custID), customerCar(custCar)
{
	cout << "Customer constructor with para" << endl;
}