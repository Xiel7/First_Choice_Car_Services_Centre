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

	void setFirstName(string fName);
	string getFirstName();
	void setLastName(string lName);
	string getLasttName();
	void setID(string id);
	string getID();

};