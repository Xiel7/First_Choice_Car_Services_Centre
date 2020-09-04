#pragma once

#include "Customer.h"
#include "Technician.h"
#include "Appointment.h"

#include <iostream>
#include <string>

using namespace std;

class Services{
private:
	string transCode;
	string servicesDesc;
	Customer* customer;
	Technician* technician;
	Appointment* appointment;


public:
	Services();
	Services(string transCode, string servicesDesc, Customer* customer, Technician* technician);
	Services(string transCode, string servicesDesc, Customer* customer, Technician* technician, Appointment* appointment);
	
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

	void setAppointment(Appointment* appointment);
	Appointment* getAppointment();
};