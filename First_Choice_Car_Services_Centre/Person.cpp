#include "Person.h"
#include <iostream>
#include <string>

Person::Person()
{
	cout << "Person constructors" << endl;
}

Person::Person(string firstName, string lastName, string id)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->id = id;
	cout << "Person constructor with para" << endl;
}