#include <iostream>
#include <stdlib.h>
#include <string>
#include <Windows.h>
#include <iomanip>

#include"Person.h"
#include "Services.h"
#include "Appointment.h"
#include "Manager.h"
#include "Customer.h"
#include "Technician.h"
#include "Car.h"

using namespace std;

void logoScreen();
void mainMenu();
void managerLoginScreen(int* valid);
void clearScreen(int n);
void registrationScreen();
void registerTechnician();
void registerCustomer();
int choices(int n);
void searchTechnician();
void makeAppointment();
void displayAllTechnician();
void displayAllCustomer();
void displayAllAppointments();
void displayAllCustomerTransactions();
void displaySummary();
void displayAllServices();
void transacHistory();
void discountPrivilege();


int sizeManager;
int sizeTechnician;
int sizeCar;
int sizeCustomer;
int sizeServices;
int sizeAppoint;

Manager* pManager;
Car* pCars;
Customer* pCust;
Technician* pTech;
Services* pServices;
Appointment* pAppoint;


int main()
{	
	
	//initialize base class
	sizeManager = 3;
	sizeTechnician = 5;
	sizeCustomer = 10;
	sizeServices = 10;
	sizeAppoint = 10;
	sizeCar = 10;
	
	pManager = new Manager[sizeManager];
	pManager[0] = Manager("ImNikeer", "Nikeer123", "Nike", "Er", "MG1001");
	pManager[1] = Manager("DidiHere", "Urdidi", "En Di", "Loh", "MG1002");
	pManager[2] = Manager("BoiLee", "Boiboi3253", "Chong Wai", "Lee", "MG1003");

	pCars = new Car[sizeCar];
	pCars[0] = Car("WXY101", "ProtonWira", "White");
	pCars[1] = Car("WTX3145", "ToyotaVios", "Grey");
	pCars[2] = Car("VES2651", "MercedesBenz", "Black");
	pCars[3] = Car("GJD3101", "HondaJazz", "Red");
	pCars[4] = Car("KFS4385", "HondaSivic", "Black");
	pCars[5] = Car("MCD74", "Kancil", "White");
	pCars[6] = Car("WWW1", "ToyotaEstima", "Gold");
	pCars[7] = Car("SGF562", "Myvi", "Green");
	pCars[8] = Car("WSH1031", "ProtonSaga", "White");
	pCars[9] = Car("WXT9985", "ToyotaVios", "Black");
	
	pCust = new Customer[sizeCustomer];
	pCust[0] = Customer(pCars[0], "Baka", "Yarou", "CT0001", "012-5342543", 'F');
	pCust[1] = Customer(pCars[1], "Soon Rong", "Tan", "CT0002", "013-6558657", 'M');
	pCust[2] = Customer(pCars[2], "Ken", "Wong", "CT0003", "015-7873543", 'M');
	pCust[3] = Customer(pCars[3], "Benny", "Loh", "CT0004", "012-9232543", 'M');
	pCust[4] = Customer(pCars[4], "Kamal", "Ahri", "CT0005", "011-5875243", 'F');
	pCust[5] = Customer(pCars[5], "Ali", "Yan", "CT0006", "016-8765213", 'M');
	pCust[6] = Customer(pCars[6], "Muthu", "Sini", "CT0007", "017-5313543", 'F');
	pCust[7] = Customer(pCars[7], "Song Kai", "Eow", "CT0008", "017-0762543", 'M');
	pCust[8] = Customer(pCars[8], "Aaron", "Chia", "CT0009", "018-5365343", 'M');
	pCust[9] = Customer(pCars[9], "Lei Hou", "Keng", "CT0010", "019-5452543", 'M');
	
	pTech = new Technician[sizeTechnician];
	pTech[0] = Technician("Sai Seng", "Wong", "TC0001");
	pTech[1] = Technician("Ramli", "Kao", "TC0002");
	pTech[2] = Technician("Ali", "Gin", "TC0003");
	pTech[3] = Technician("Steady", "Bro", "TC0004");
	pTech[4] = Technician("Speed", "Run", "TC0005");
	
	pServices = new Services[sizeServices];
	pServices[0] = Services("SVC0001", "Car Wash", "Car Wash", 20.00, &pCust[1], &pTech[1]);
	pServices[1] = Services("SVC0002", "Repair", "Repair", 140.00, &pCust[2], &pTech[1]);
	pServices[2] = Services("SVC0003", "Wax & Polish", "Polish & Restoration", 500.00, &pCust[3], &pTech[2]);
	pServices[3] = Services("SVC0004", "Wax & Polish", "Waxing", 160.00, &pCust[3], &pTech[3]);
	pServices[4] = Services("SVC0005", "Wax & Polish", "One Step Waxing (Meguiar's)", 160.00, &pCust[3], &pTech[2]);
	pServices[5] = Services("SVC0006", "Wax & Polish", "Polish & Wax 3 Steps (Meguiar's)", 500.00, &pCust[3], &pTech[0]);
	pServices[6] = Services("SVC0007", "Wax & Polish", "One Step Waxing (Meguiar's)", 160.00, &pCust[3], &pTech[1]);
	pServices[7] = Services("SVC0008", "Wax & Polish", " Basic Polish & Wax 2 Steps (Meguiar's", 280.00, &pCust[3], &pTech[3]);
	pServices[8] = Services("SVC0009", "Wax & Polish", "Polish & Restoration", 500.00, &pCust[3], &pTech[4]);
	pServices[9] = Services("SVC00010", "Wax & Polish", "One Step Waxing (Meguiar's)", 160.00, &pCust[3], &pTech[0]);
	
	pAppoint = new Appointment[sizeAppoint];
	pAppoint[0] = Appointment(31, 8, 2019, 14, 20, &pServices[0]);
	pAppoint[1] = Appointment(2, 9, 2019, 11, 20, &pServices[1]);
	pAppoint[2] = Appointment(30, 9, 2019, 12, 30, &pServices[2]);
	pAppoint[3] = Appointment(27, 10, 2019, 10, 10, &pServices[3]);
	pAppoint[4] = Appointment(19, 12, 2019, 10, 30, &pServices[4]);
	pAppoint[5] = Appointment(1, 2, 2020, 13, 40, &pServices[5]);
	pAppoint[6] = Appointment(9, 3, 2020, 11, 15, &pServices[6]);
	pAppoint[7] = Appointment(13, 4, 2020, 15, 30, &pServices[7]);
	pAppoint[8] = Appointment(7, 5, 2020, 11, 20, &pServices[8]);
	pAppoint[9] = Appointment(5, 6, 2020, 12, 30, &pServices[9]);


	char option;
	int valid = 0; //for do while loop 
	int choice = 0;

	logoScreen();//Logo Screen
	clearScreen(1500);
	do {
		managerLoginScreen(&valid);

	} while (valid == 0);
	clearScreen(1000);//manager login screen
	
	

	do {
		mainMenu();
		choice = choices(8);

		switch (choice)
		{
		case 1:
			makeAppointment();
			break;
		case 2:
			displaySummary();
			break;
		case 3:
			discountPrivilege();
			break;
		case 4:
			transacHistory();
			break;
		case 5:
			searchTechnician();
			break;
		case 6:
			registrationScreen();
			break;
		case 7:
			cout << "Exited Successfully..." << endl;
			exit(1);
			break;

		}

		cout << "\n\n\nDo you wish to return to Main Menu?(Y/N) >";
		cin >> option;
		clearScreen(1000);
	} while (toupper(option) == 'Y');

	return 0;
	//master

}

void logoScreen()
{
	const char* logo = R"===(
*****************************************************
                __________             /\   /\
               /*****|****\           (  (__)  )
      ________/*_____|____*\_______     \__  __\
     /    ____            ____     \       \  \
    |____-    -__________-    -_____|       \  \
         \____/          \____/              \  \
                                             (____) 

 *********First Choice Car Services Centre***********
    )===";
	cout << logo;
}

void managerLoginScreen(int *valid)
{
	const char* screen = R"===(
         LOGIN SCREEN
------------------------------
    )===";
	cout << screen << endl;

	string userName, password;

	cout << "Username: ";
	cin >> userName;
	cout << "Password: ";
	cin >> password;

	for (int i = 0; i < sizeManager; i++)
	{
		if (userName.compare(pManager[i].getUsername()) == 0 && password.compare(pManager[i].getPassword()) == 0)
		{
			*valid = 1;
			cout << "Login Successful..." << endl;
			break;
		}
		else if(i == sizeManager-1)
		{
			cout << "Wrong Username or Password!\nPlease re-enter." << endl;
			*valid = 0;
			clearScreen(1000);
			break;
		}
			
	}


}

void mainMenu()
{
	const char* screen = R"===(
         MAIN MENU
------------------------------
1. Make an Appointment
2. Display Summary Reports
3. Discount Privilege
4. Transaction History
5. Technician Detail
6. Registration
7. Exit
    )===";
	cout << screen << endl;
}

void clearScreen(int n)
{
	Sleep(n);
	system("CLS");
}

void registrationScreen()
{
	int choice;
	const char* screen = R"===(
        REGISTRATION
------------------------------
1. Customer
2. Technician
3. Services
    )===";

	clearScreen(1000);
	cout << screen << endl;
	choice = choices(3);

	switch (choice)
	{
	case 1:
		registerCustomer();
		break;
	case 2:
		registerTechnician();
		break;
	case 3:
		//services
		break;
	}

	


}

void registerCustomer()
{
	int tempSize;
	tempSize = sizeCustomer;

	Customer* tempCustomer = new Customer;
	const char* screen = R"===(
    CUSTOMER REGISTRATION
------------------------------
    )===";
	clearScreen(1000);
	cout << screen << endl;

	sizeCustomer++;
	tempCustomer->registerCustomer(sizeCustomer);

	Customer* temp = new Customer[sizeCustomer];

	for (int i = 0; i < tempSize; i++)
	{
		temp[i] = pCust[i];
	}
	
	delete[] pCust;
	pCust = temp;

	pCust[sizeCustomer - 1] = tempCustomer[0];
	cout << "\n";
	cout << "New Customer: " << endl;
	pCust[sizeCustomer - 1].printInfo();

	
	

}

void makeAppointment()
{
	int tempSizeA, tempSizeS;
	tempSizeA = sizeAppoint;
	tempSizeS = sizeServices;

	Appointment* tempAppoint = new Appointment;
	Services* tempService = new Services;
	const char* screen = R"===(
         APPOINTMENT
------------------------------
    )===";
	clearScreen(1000);
	cout << screen << endl;

	sizeAppoint++;
	sizeServices++;

	
	
	// check if appointment time is valid
	int valid;
	do {
		
		valid = 1;
		tempAppoint->appointmentSet();
		tempService->registerService(pCust, sizeCustomer, pTech, sizeTechnician, sizeServices);

		//National Day Free Inspection
		if (tempAppoint->getDay() == 31 && tempAppoint->getMonth() == 8 && tempService->getServiceType() == "Inspection")
		{
			tempService->setPrice(0.00);
			cout << endl;
			cout << "Free Inspection for National Day!" << endl;
			cout << endl;
		}
		//Wax & Polish discount
		else if (tempService->getServiceType() == "Wax & Polish")
		{
			bool recordFound = false;
			int serviceCount = 0;
			double discountPercent = 0;

			for (int i = 0; i < tempSizeS; i++)
			{
				if (tempService->getCustomer()->getID().compare(pServices[i].getCustomer()->getID()) == 0)
				{
					if (pServices[i].getServiceType().compare("Wax & Polish") == 0)
					{
						serviceCount++;
						recordFound = true;
					}
				}

			}

			if (recordFound)
			{
				cout << endl;
				cout << "Number of Service for Wax & Polish : " << serviceCount << endl;
				serviceCount = serviceCount % 10;

				if (serviceCount >= 5 && serviceCount <= 7)
				{
					discountPercent = 0.10;
				}
				else if (serviceCount >= 8 && serviceCount <= 9)
				{
					discountPercent = 0.30;
				}
				else if (serviceCount == 0)
				{
					discountPercent = 1.00;
				}


				cout << "Customer Mr." << tempService->getCustomer()->getLastName() << " is entitled to " << discountPercent * 100 << "% discount in Wax & Polish" << endl;
				cout << "Please check the discount privilege for more information..." << endl;
			}

			tempService->setPrice(tempService->getPrice() - (tempService->getPrice() * discountPercent));

		}

		tempAppoint->setServices(tempService);
		

		for (int i = 0; i < tempSizeA; i++)
		{
			if (tempAppoint->getDay() == pAppoint[i].getDay() && tempAppoint->getMonth() == pAppoint[i].getMonth() &&
				tempAppoint->getYear() == pAppoint[i].getYear()
				&& tempAppoint->getStartHr() == pAppoint[i].getStartHr() && tempAppoint->getStartMin() == pAppoint[i].getStartMin()
				&& tempAppoint->getServices()->getTechnician()->getID() == pAppoint[i].getServices()->getTechnician()->getID())
			{
				
				valid = 0;
				cout << "Appointment clashed! Please try again!" << endl;
			}
		}


	} while (valid == 0);
	
	

	//reasign pointer
	Appointment* tempA = new Appointment[sizeAppoint];

	for (int i = 0; i < tempSizeA; i++)
	{
		tempA[i] = pAppoint[i];
	}
	delete[] pAppoint;
	pAppoint = tempA;

	//reasign pointer
	Services* tempS = new Services[sizeServices];

	for (int i = 0; i < tempSizeS; i++)
	{
		tempS[i] = pServices[i];
	}
	delete[] pServices;
	pServices = tempS;
	
	//set new service and appointment
	pServices[sizeServices - 1] = tempService[0];
	pAppoint[sizeAppoint - 1] = tempAppoint[0];

	pAppoint[sizeAppoint - 1].printAppointment();

	cout << "Appointment done..." << endl;


}

void registerTechnician()
{
	int tempSize;
	tempSize = sizeTechnician;

	Technician* tempTech = new Technician;

	const char* screen = R"===(
    TECHNICIAN REGISTRATION
------------------------------
    )===";
	clearScreen(1000);
	cout << screen << endl;

	sizeTechnician++;
	tempTech->registerTechnician(sizeTechnician);
	
	Technician* temp = new Technician[sizeTechnician];

	for (int i = 0; i < tempSize; i++)
	{
		temp[i] = pTech[i];
	}
	delete[] pTech;
	pTech = temp;


	pTech[sizeManager - 1] = tempTech[0];
	cout << "New Technician: " << endl;
	pTech[sizeManager - 1].printInfo();

}   

void searchTechnician()
{
	int choice;
	char selection;
	string getID;

	const char* screen = R"===(
 SEARCH TECHNICIAN INFORMATION
------------------------------
    )===";
	clearScreen(1000);
	cout << screen << endl;

	cout << "Do you wish to display all technician <Y/N> : ";
	cin >> selection;
	do {
		

		try
		{
			if (toupper(selection) == 'Y')
			{
				displayAllTechnician();
			}
			else if (toupper(selection) == 'N')
			{
				//nothing
			}
			else
			{
				throw 99;
				cout << "Do you wish to display all technician: ";
				cin >> selection;
			}
		}
		catch (int e)
		{
			cerr << "Please enter the right choice." << endl;
			break;
		}
		

	} while (!(toupper(selection) == 'Y' || toupper(selection) == 'N'));

	cout << "Enter the technician ID: ";
	cin >> getID;
	for (int i = 0; i < sizeTechnician; i++)
	{
		if (getID.compare(pTech[i].getID()) == 0)
		{
			pTech[i].printInfo();
			
			cout << "Services handled by " << pTech[i].getFirstName() << " " << pTech[i].getLastName() << endl;
			
			int count;
			for (int j = 0; j < sizeServices; j++)
			{
				count = 0;
				if (pTech[i].getID().compare(pServices[j].getTechnician()->getID()) == 0)
				{
					count++;
					cout << "==============" << endl;
					cout << "Service No." << count << endl;
					cout << "==============" << endl;
					pServices[j].printService();
					
				}
				
			}

			break;
		}
	}
}

void displayAllTechnician()
{

	const char* screen = R"===(
  ALL TECHNICIAN INFORMATION
------------------------------
    )===";
	clearScreen(1000);
	cout << screen << endl;
	
	//cout << "techIDName" << endl;
	for (int i = 0; i < sizeTechnician; i++)
	{
		cout << pTech[i].getID() << "	" << pTech[i].getFirstName() << " " << pTech[i].getLastName() << endl;
	}
}

void displayAllCustomer()
{
	const char* screen = R"===(
  ALL CUSTOMER INFORMATION
------------------------------
    )===";
	cout << screen << endl;
	clearScreen(1000);
	
	for (int i = 0; i < sizeTechnician; i++)
	{
		cout << pCust[i].getID() << "	" << pCust[i].getFirstName() << " " << pCust[i].getLastName() << endl;
	}
}

void transacHistory()
{
	string carRegisNum;
	int count;
	bool recordFound = false;
	const char* screen = R"===(
     TRANSACTION HISTORY
------------------------------
    )===";
	clearScreen(1000);
	cout << screen << endl;

	cout << "Enter the car registration number: ";
	cin >> carRegisNum;


	for (int i = 0; i < sizeAppoint; i++)
	{
		
		if (carRegisNum.compare(pAppoint[i].getServices()->getCustomer()->getCustomerCar().getCrNo()) == 0)
		{
			count = i + 1;
			cout << endl;
			cout << "Transaction No." << count << endl;
			cout << "-----------------" << endl;
			pAppoint[i].printAppointment();
			recordFound = true;
		}
		else if (i == sizeAppoint - 1 && !recordFound)
		{
			cout << "No record was found for this car registration number." << endl;
		}
	}
}

void displayAllAppointments()
{
	int count = 0;
	const char* screen = R"===(
       ALL APPOINTMENTS
------------------------------
    )===";
	clearScreen(1000);
	cout << screen << endl;
	
	cout << "No.  Date(dd/MM/YYYY)      Time(HHMM)     Service Type    Car Registration  CustomerID  TechnicianID" << endl;
	cout << "---  ----------------      ----------     ------------    ----------------  ----------  ------------" << endl;

	for (int i = 0; i < sizeAppoint; i++)
	{
		count++;
		printf("%3d   %02d/%02d/%02d           %02d%02d %20s         %10s  %10s  %12s\n",count, pAppoint[i].getDay(), pAppoint[i].getMonth(), pAppoint[i].getYear(), 
			pAppoint[i].getStartHr(),pAppoint[i].getStartMin(),pAppoint[i].getServices()->getServiceType().c_str(), 
			pAppoint[i].getServices()->getCustomer()->getCustomerCar().getCrNo().c_str(),
			pAppoint[i].getServices()->getCustomer()->getID().c_str(),
			pAppoint[i].getServices()->getTechnician()->getID().c_str());
	}
}

void displayAllServices()
{
	int count = 0;
	const char* screen = R"===(
       ALL SERVICES
------------------------------
    )===";
	clearScreen(1000);
	cout << screen << endl;
	
	cout << "No.  Date(dd/MM/YYYY)      Time(HHMM) Transaction Code     Service Type                            Services Description       TechnicianID" << endl;
	cout << "---  ----------------      ---------- ----------------     ------------    --------------------------------------------       ------------" << endl;

	for (int i = 0; i < sizeAppoint; i++)
	{
		count++;
		printf("%3d   %02d/%02d/%02d           %02d%02d %16s %20s         %40s       %12s\n", count, pAppoint[i].getDay(), pAppoint[i].getMonth(), pAppoint[i].getYear(),
			pAppoint[i].getStartHr(), pAppoint[i].getStartMin(), pAppoint[i].getServices()->getTransCode().c_str(), pAppoint[i].getServices()->getServiceType().c_str(),
			pAppoint[i].getServices()->getServicesDesc().c_str(),
			pAppoint[i].getServices()->getTechnician()->getID().c_str());
	}
}

void displayAllCustomerTransactions()
{
	int count = 0;
	const char* screen = R"===(
   ALL CUSTOMER TRANSACTIONS
------------------------------
    )===";
	clearScreen(1000);
	cout << screen << endl;

	cout << "No.  Date(dd/MM/YYYY)    Time(HHMM) CustomerID       Service Type     Price Charged  Car Registration          Car Model" << endl;
	cout << "---  ----------------    ---------- ----------       ------------     -------------  ----------------          ---------" << endl;

	for (int i = 0; i < sizeAppoint; i++)
	{
		count++;
		printf("%3d   %02d/%02d/%02d           %02d%02d  %10s           %12s    %13.2f  %16s  %20s\n", count, pAppoint[i].getDay(), pAppoint[i].getMonth(), pAppoint[i].getYear(),
			pAppoint[i].getStartHr(), pAppoint[i].getStartMin(), pAppoint[i].getServices()->getCustomer()->getID().c_str(), pAppoint[i].getServices()->getServiceType().c_str(),
			pAppoint[i].getServices()->getPrice(),
			pAppoint[i].getServices()->getCustomer()->getCustomerCar().getCrNo().c_str(),
			pAppoint[i].getServices()->getCustomer()->getCustomerCar().getCrMode().c_str());
	}
}

void discountPrivilege()
{
	string custID;
	bool recordFound = false;
	int serviceCount = 0;
	double discountPercent = 0;

	const char* screen = R"===(
      DISCOUNT PRIVILEGE
      (For Wax & Polish)
------------------------------
No. of Service   Discount Rate
   5 - 7            10%
   8 - 9            30%
  Every 10       Free 1 service
    )===";
	clearScreen(1000);
	cout << screen << endl;

	cout << endl;
	cout << "Enter the customer ID (EX: CT0001) : ";
	cin >> custID;

	for (int i = 0; i < sizeCustomer; i++)
	{
		if (custID.compare(pCust[i].getID()) == 0)
		{
			for (int j = 0; j < sizeServices; j++)
			{
				if (pCust[i].getID().compare(pServices[j].getCustomer()->getID()) == 0)
				{
					if (pServices[j].getServiceType().compare("Wax & Polish") == 0)
					{
						serviceCount++;
						recordFound = true;
					}
				}
				
			}
			
		}
		else if (i == sizeServices - 1 && !recordFound)
		{
			cout << "No record of Wax & Polish service found for this customer ID." << endl;
		}
	}

	if (recordFound)
	{
		cout << "Number of Service for Wax & Polish : " << serviceCount << endl;
		serviceCount = serviceCount % 10;

		if (serviceCount >= 5 && serviceCount <= 7)
		{
			discountPercent = 0.10;
		}
		else if (serviceCount >= 8 && serviceCount <= 9)
		{
			discountPercent = 0.30;
		}
		else if (serviceCount == 0)
		{
			discountPercent = 1.00;
		}

		cout << "This customer is entitled to " << discountPercent * 100 << "% discount in Wax & Polish" << endl;
	}

}

void displaySummary()
{
	int choice;
	const char* screen = R"===(
       SUMMARY REPORTS
------------------------------
1. All Appointments
2. All Customer Transactions
3. All Services Report
4. All Customers
5. All Technicians
    )===";
	clearScreen(1000);
	cout << screen << endl;

	choice = choices(5);

	switch (choice)
	{
	case 1:
		displayAllAppointments();
		break;
	case 2:
		displayAllCustomerTransactions();
		break;
	case 3:
		displayAllServices();
		break;
	case 4:
		displayAllCustomer();
		break;
	case 5:
		displayAllTechnician();
		break;
	}

}

int choices(int n)
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
