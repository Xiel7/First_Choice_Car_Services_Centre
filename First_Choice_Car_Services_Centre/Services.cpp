#include "Services.h"
#include <iostream>

Services::Services()
{

}

Services::Services(string transCode, string serviceType, string servicesDesc, Customer* customer, Technician* technician): customer(customer), technician(technician)
{
	this->serviceType = serviceType;
	this->transCode = transCode;
	this->servicesDesc = servicesDesc;
}


void Services::printService()
{
	cout << "\n";
	cout << "Service Transaction Code: " << transCode << endl;
	cout << "Service Type: " << serviceType << endl;
	cout << "Service Description: " << servicesDesc << endl;
	customer->printInfo();
	technician->printInfo();
	/*cout << "Customer Car: " << customer->getCustomerCar().getCrNo() << endl;
	cout << "Customer Name: " << customer->getFirstName() << " " << customer->getLastName() << endl;
	cout << "Customer ID: " << customer->getID() << endl;*/
	cout << "\n";
}


//set gets
void Services::setTransCode(string tc)
{
	transCode = tc;
}
string Services::getTransCode()
{
	return transCode;
}
void Services::setServicesDesc(string sc)
{
	servicesDesc = sc;
}

string Services::getServicesDesc()
{
	return servicesDesc;
}

void Services::setCustomer(Customer* customer)
{
	this->customer = customer;
}

Customer* Services::getCustomer()
{
	return customer;
}

void Services::setTechnician(Technician* technician)
{
	this->technician = technician;
}

Technician* Services::getTechnician()
{
	return technician;
}


void Services::setServiceType(string srvcType)
{
	serviceType = srvcType;
}

string Services::getServiceType()
{
	return serviceType;
}
