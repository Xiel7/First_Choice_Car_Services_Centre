#pragma once
#include "Customer.h"
#include <iostream>
#include <string>

using namespace std;

class Car : public Customer {

private:
	string crNo;

public:
	Car();
	Car(string crNo);
	void setcrNo(string);
	string getcrNo;
};