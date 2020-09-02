#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string firstName;
	string lastName;
	string id;

public:
	Person();
	Person(string firstName, string lastName, string id);

	virtual void printInfo() = 0;

	//set get
	void setFirstName(string fName);
	string getFirstName();
	void setLastName(string lName);
	string getLastName();
	void setID(string id);
	string getID();

};