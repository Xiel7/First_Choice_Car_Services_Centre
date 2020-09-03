#pragma once
#include "Person.h"
#include "Car.h"
#include <string>

using namespace std;


class Customer : public Person {

private:
	Car customerCar;

public:
	Customer();
	Customer(Car custCar, string firstName, string lastName, string custID);

	
	void printInfo();
	void setCustomerCar(Car custCar);
	Car getCustomerCar();
};