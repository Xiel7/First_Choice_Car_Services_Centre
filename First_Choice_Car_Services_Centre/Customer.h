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
	Customer(Car custCar);
};