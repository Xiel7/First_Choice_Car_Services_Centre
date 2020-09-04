#pragma once
#include "Person.h"
#include <string>

using namespace std;


class Manager : public Person {
private:
	string username;
	string password;

public:
	Manager();
	Manager(string username, string password, string firstName, string lastName, string managerID);
	void printInfo();


	//set gets 
	void setUsername(string us);
	string getUsername();
	void setPassword(string ps);
	string getPassword();
};