#pragma once

#include "Customer.h"
#include "Technician.h"

#include <iostream>
#include <string>

using namespace std;

class Services{
private:
	string transCode;
	string servicesDesc;
	Customer customer;
	Technician technician;


public:
	
	void setTransCode(string);
	string getTransCode();
	
};