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
	double price;
	Customer* customer;
	Technician* technician;
	string abbrev = "SVC";
	

public:
	Services();
	Services(string transCode,string serviceType, string servicesDesc, double price, Customer* customer, Technician* technician);

	void printService();
	void registerService(Customer* customer, int sizeCust, Technician* technician, int sizeTech, int sizeService);
	int choices(int n);

	void carWash();
	void repair();
	void repaint();
	void waxPolish();
	void maintenance();
	void inspection();

	//set get
	void setTransCode(string tc);
	string getTransCode();

	void setServicesDesc(string sc);
	string getServicesDesc();

	void setPrice(double price);
	double getPrice();

	void setCustomer(Customer* customer);
	Customer* getCustomer();

	void setTechnician(Technician* technician);
	Technician* getTechnician();

	void setServiceType(string srvcType);
	string getServiceType();


	/*cout << "Service Type" << endl;
	cout << "------------" << endl;
	cout << "1. Car Wash" << endl;
	cout << "2. Repair" << endl;
	cout << "3. Repaint" << endl;
	cout << "4. Wax & Polish" << endl;
	cout << "5. Maintenance" << endl;
	cout << "6. Inspection" << endl;
	cout << "Select the service wanted: ";*/
};