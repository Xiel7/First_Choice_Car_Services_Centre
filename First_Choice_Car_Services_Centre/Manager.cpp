#include "Manager.h"
#include "Person.h"

#include <iostream>
#include <string>


Manager::Manager()
{

}

Manager::Manager(string username, string password, string firstName, string lastName, string managerID) : Person(firstName, lastName, managerID)
{
	this->username = username;
	this->password = password;
}

void Manager::printInfo()
{
	cout << "\n";
	cout << "Manager Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Manager ID: " << getID() << endl;
	cout << "Manager Username: " << username << endl;
	cout << "\n";
}

void Manager::setUsername(string us)
{
	username = us;
}

string Manager::getUsername()
{
	return username;
}

void Manager::setPassword(string ps)
{
	password = ps;
}

string Manager::getPassword()
{
	return password;
}