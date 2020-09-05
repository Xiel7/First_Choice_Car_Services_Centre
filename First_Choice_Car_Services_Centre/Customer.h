#pragma once
#include "Person.h"
#include "Car.h"
#include <string>

using namespace std;


class Customer : public Person {

private:
	Car customerCar;
	char gender;
	string phoneNo;
	string abbrev = "CT";

public:
	Customer();
	Customer(Car custCar, string firstName, string lastName, string custID, string phoneNo, char gender);

	void registerCustomer(int size);
	void printInfo();

	//set get
	void setCustomerCar(Car custCar);
	Car getCustomerCar();
	void setPhoneNo(string phoneNo);
	string getPhoneNo();
	void setGender(char gender);
	char getGender();

};