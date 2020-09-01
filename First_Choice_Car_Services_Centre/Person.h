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

	void setFirstName(string);
	string getFirstName;
	void setLastName(string);
	string getLasttName;
	void setID(string);
	string getID;

};