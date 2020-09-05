#pragma once

#include "Customer.h"
#include "Technician.h"

#include <iostream>
#include <string>

using namespace std;

class Services{
private:
	string transCode;
	string serviceType;
	string servicesDesc;
	Customer* customer;
	Technician* technician;

public:
	Services();
	Services(string transCode,string serviceType, string servicesDesc, Customer* customer, Technician* technician);

	void printService();

	//set get
	void setTransCode(string tc);
	string getTransCode();

	

	void setServicesDesc(string sc);
	string getServicesDesc();

	void setCustomer(Customer* customer);
	Customer* getCustomer();

	void setTechnician(Technician* technician);
	Technician* getTechnician();

	void setServiceType(string srvcType);
	string getServiceType();
};