#include "Services.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

Services::Services()
{

}

Services::Services(string transCode, string serviceType, string servicesDesc, double price, Customer* customer, Technician* technician): customer(customer), technician(technician)
{
	this->serviceType = serviceType;
	this->transCode = transCode;
	this->servicesDesc = servicesDesc;
	this->price = price;
}


void Services::printService()
{
	
	cout << "\n";
	cout << "Service Transaction Code: " << transCode << endl;
	cout << "Service Type: " << serviceType << endl;
	cout << "Service Description: " << servicesDesc << endl;
	cout << "Service Price : RM " << fixed << setprecision(2) << price << endl;
	customer->printInfo();
	technician->printInfo();
	/*cout << "Customer Car: " << customer->getCustomerCar().getCrNo() << endl;
	cout << "Customer Name: " << customer->getFirstName() << " " << customer->getLastName() << endl;
	cout << "Customer ID: " << customer->getID() << endl;*/
	cout << "\n";
}

void Services::registerService(Customer* customer, int sizeCust, Technician* technician, int sizeTech)
{
	int choice;

	cout << "--------------------" << endl;
	cout << "Service Registration" << endl;
	cout << "--------------------" << endl;
	cout << endl;
	cout << "Service Type" << endl;
	cout << "------------" << endl;
	cout << "1. Car Wash" << endl;
	cout << "2. Repair" << endl;
	cout << "3. Repaint" << endl;
	cout << "4. Wax & Polish" << endl;
	cout << "5. Maintenance" << endl;
	cout << "6. Inspection" << endl;
	cout << "Select the service wanted: ";

	choice = choices(6);

	switch (choice)
	{
	case 1:
		serviceType = "Car Wash";
		carWash();
		break;
	case 2:
		serviceType = "Repair";
		repair();
		break;
	case 3:
		serviceType = "Repaint";
		repaint();
		break;
	case 4:
		serviceType = "Wax & Polish";
		waxPolish();
		break;
	case 5:
		serviceType = "Maintenance";
		maintenance();
		break;
	case 6:
		serviceType = "Inspection";
		inspection();
	}
	
	string custID, techID;
	int valid = 1;

	cout << endl;
	cout << "Assign Customer" << endl;
	cout << "---------------" << endl;

	do {
		cout << "Enter the customer ID that took the service (You must register the customer first): ";
		cin >> custID;

		for (int i = 0; i < sizeCust; i++)
		{
			if (custID.compare(customer[i].getID()))
			{
				setCustomer(&customer[i]);
				cout << "Setting customer done..." << endl;
				valid = 1;
				break;
			}
			else if (i == sizeCust - 1)
			{
				valid = 0;
				cout << "Please enter the customer ID that exist." << endl;
			}
		}
	} while (valid == 0);

	cout << endl;
	cout << "Assign Technician" << endl;
	cout << "---------------" << endl;
	
	do {
		cout << "Enter the technician ID that took the service (You must register the customer first): ";
		cin >> techID;

		for (int i = 0; i < sizeTech; i++)
		{
			if (techID.compare(technician[i].getID()))
			{
				setTechnician(&technician[i]);
				cout << "Setting technician done..." << endl;
				valid = 1;
				break;
			}
			else if (i == sizeCust - 1)
			{
				valid = 0;
				cout << "Please enter the technician ID that exist." << endl;
			}
		}
	} while (valid == 0);
	
}


void Services::carWash()
{
	int choice;
	cout << "  Car Wash " << endl;
	cout << "------------" << endl;
	cout << "1. Fast Cleaning - RM10" << endl;
	cout << "2. Deep Cleaning - RM20" << endl;
	cout << "3. In Out Cleaning - RM100" << endl;
	cout << "Select the service wanted: ";
	choice = choices(3);

	switch (choice)
	{
	case 1:
		servicesDesc = "Fast Cleaning";
		price = 10.00;
		break;
	case 2:
		servicesDesc = "Deep Cleaning";
		price = 20.00;
		break;
	case 3:
		servicesDesc = "In Out Cleaning";
		price = 100.00;
		break;
	}
}
void Services::repair()
{
	int choice;
	cout << "   Repair " << endl;
	cout << "------------" << endl;
	cout << "1. Dent - RM300" << endl;
	cout << "2. Scratches - RM1000" << endl;
	cout << "3. Cracks - RM1500" << endl;
	cout << "4. Bent Frames - RM3000" << endl;
	cout << "Select the service wanted: ";
	choice = choices(4);

	switch (choice)
	{
	case 1:
		servicesDesc = "Dent";
		price = 300.00;
		break;
	case 2:
		servicesDesc = "Scratches";
		price = 1000.00;
		break;
	case 3:
		servicesDesc = "Cracks";
		price = 1500.00;
		break;
	case 4:
		servicesDesc = "Bent Frames";
		price = 3000.00;
		break;
	}
}
void Services::repaint()
{
	int choice;
	cout << "   Repaint " << endl;
	cout << "------------" << endl;
	cout << "1. Black - RM300" << endl;
	cout << "2. White - RM300" << endl;
	cout << "3. Red - RM300" << endl;
	cout << "4. Red(Chrome) - RM500" << endl;
	cout << "5. Yellow - RM300" << endl;
	cout << "6. Yellow(Chrome) - RM500" << endl;
	cout << "7. Green - RM300" << endl;
	cout << "8. Green(Chrome) - RM500" << endl;
	cout << "9. Blue - RM300" << endl;
	cout << "10. Blue(Chrome) - RM500" << endl;
	cout << "Select the service wanted: ";
	choice = choices(10);

	switch (choice)
	{
	case 1:
		servicesDesc = "Black";
		price = 300.00;
		break;
	case 2:
		servicesDesc = "White";
		price = 300.00;
		break;
	case 3:
		servicesDesc = "Red";
		price = 300.00;
		break;
	case 4:
		servicesDesc = "Red(Chrome)";
		price = 500.00;
		break;
	case 5:
		servicesDesc = "Green";
		price = 300.00;
		break;
	case 6:
		servicesDesc = "Green(Chrome)";
		price = 500.00;
		break;
	case 7:
		servicesDesc = "Yellow";
		price = 300.00;
		break;
	case 8:
		servicesDesc = "Yellow(Chrome)";
		price = 500.00;
		break;
	case 9:
		servicesDesc = "Blue";
		price = 300.00;
		break;
	case 10:
		servicesDesc = "Blue(Chrome)";
		price = 500.00;
		break;
	}
}
void Services::waxPolish()
{
	int choice;
	cout << "  Wax & Polish " << endl;
	cout << "------------" << endl;
	cout << "1. Polish & Restoration - RM500" << endl;
	cout << "2. Waxing - RM160" << endl;
	cout << "3. Polish & Wax 3 Steps (Meguiar’s) - RM500" << endl;
	cout << "4. Basic Polish & Wax 2 Steps (Meguiar’s) - RM280" << endl;
	cout << "5. One Step Waxing (Meguiar’s) - RM160" << endl;
	cout << "Select the service wanted: ";
	choice = choices(5);

	switch (choice)
	{
	case 1:
		servicesDesc = " Polish & Restoration";
		price = 500.00;
		break;
	case 2:
		servicesDesc = "Waxing";
		price = 160.00;
		break;
	case 3:
		servicesDesc = "Polish & Wax 3 Steps (Meguiar’s)";
		price = 500.00;
		break;
	case 4:
		servicesDesc = "Basic Polish & Wax 2 Steps (Meguiar’s)";
		price = 280.00;
		break;
	case 5:
		servicesDesc = "One Step Waxing (Meguiar’s)";
		price = 160.00;
		break;
	}
}
void Services::maintenance()
{
	int choice;
	cout << "  Maintanance " << endl;
	cout << "------------" << endl;
	cout << "1. Oil change - RM300" << endl;
	cout << "2. Filter change - RM250" << endl;
	cout << "3. Alignment and chamber adjust - RM200" << endl;
	cout << "4. Change 2 new tires - RM1250" << endl;
	cout << "Select the service wanted: ";
	choice = choices(4);

	switch (choice)
	{
	case 1:
		servicesDesc = "Oil change";
		price = 300.00;
		break;
	case 2:
		servicesDesc = "Filter change";
		price = 250.00;
		break;
	case 3:
		servicesDesc = "Alignment and chamber adjust";
		price = 200.00;
		break;
	case 4:
		servicesDesc = "Change 2 new tires";
		price = 1250.00;
		break;
	}
}
void Services::inspection()
{
	int choice;
	cout << "  Inspection " << endl;
	cout << "------------" << endl;
	cout << "1. Inspection - RM190" << endl;
	cout << "Select the service wanted: ";
	choice = choices(1);

	switch (choice)
	{
	case 1:
		servicesDesc = "Inspection";
		price = 190.00;
		break;
	}
}

int Services::choices(int n)
{
	int choice;
	do {

		cout << "Choice :";
		cin >> choice;

		if (choice <= 0 || choice > n)
			printf("Please enter the right choice!\n");

	} while (choice <= 0 || choice > n);

	return choice;
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

void Services::setPrice(double price)
{
	this->price = price;
}

double Services::getPrice()
{
	return price;
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
