#include "Person.h"
#include <iostream>
#include <string>

Person::Person()
{
	
}

Person::Person(string firstName, string lastName, string id)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->id = id;
	
}



//set get firstName
void Person::setFirstName(string fName)
{
	firstName = fName;
}

string Person::getFirstName()
{
	return firstName;
}

//set get lastName
void Person::setLastName(string lName)
{
	lastName = lName;
}

string Person::getLastName()
{
	return lastName;
}

//set get id
void Person::setID(string id)
{
	this->id = id;
}

string Person::getID()
{
	return id;
}