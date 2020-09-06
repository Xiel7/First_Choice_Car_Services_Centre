#include <iostream>
#include <stdlib.h>
#include <string>
#include <Windows.h>

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
	sizeServices = 2;
	sizeAppoint = 1;
	
	pManager = new Manager[sizeManager];
	pManager[0] = Manager("ImNikeer", "Nikeer123", "Nike", "Er", "MG1001");
	pManager[1] = Manager("DidiHere", "Urdidi", "En Di", "Loh", "MG1002");
	pManager[2] = Manager("BoiLee", "Boiboi3253", "Chong Wai", "Lee", "MG1003");

	pCars = new Car[10];
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
	
	pCust = new Customer[10];
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
	
	pTech = new Technician[5];
	pTech[0] = Technician("Sai Seng", "Wong", "TC0001");
	pTech[1] = Technician("Ramli", "Kao", "TC0002");
	pTech[2] = Technician("Ali", "Gin", "TC0003");
	pTech[3] = Technician("Steady", "Bro", "TC0004");
	pTech[4] = Technician("Speed", "Run", "TC0005");
	
	pServices = new Services[sizeServices];
	pServices[0] = Services("SVC0001", "Car Wash", "Car Wash", 20.00, &pCust[1], &pTech[1]);
	pServices[1] = Services("SVC0002", "Repair", "Repair", 140.00, &pCust[2], &pTech[2]);

	pAppoint = new Appointment[sizeAppoint];
	pAppoint[0] = Appointment(31, 8, 2019, 14, 20, &pServices[0]);

	char option;
	int valid = 0; //for do while loop 
	int choice = 0;

	logoScreen();//Logo Screen
	clearScreen(1500);
	makeAppointment();
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
			//Main Service
			//Time Slot
			break;
		case 2:
	    //Services(Input record)
            //Transaction Code:
            //Customer ID:
            //Customer Name:
            //Date:
            //Car registration number:
            //Services Description:
            //Technician ID:
            //Technician Name:
			break;
		case 3:
		//Free Inspection
            //Inspection code:
            //Customer name:
            //Inspection date:(must match with national day)
            //Inspection description:
            //Technician name:
			break;
		case 4:
		//Customer ID:(Input this to search) 
            //Number of service:
            //Discount Rate:
			break;
		case 5:
	    //Car registration number:(input this to search)
             //Transaction Code:
             //Customer ID:
             //Customer Name:
             //Date:
             //Services Description:
             //Technician ID:
             //Technician Name:
			break;
		case 6:
			searchTechnician();
		//Technician ID:(input this to search)
             //Technician name:
             //Gender:
             //Birth date:
             //Phone Number:
			break;
		case 7:
			registrationScreen();
	    //a.Customer Registration
            //Name:
            //Gender:
            //Birth date:
            //Phone Number:
            //Email address:(Optional)

        //b.Technician Registration
            //Name:
            //Gender:
            //Birth date:
            //Field:

        //c.Service Registration
            //Name:
            //Price:
			break;
		case 8:
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
1. Appointment
2. Services
3. Free Inspection
4. Discount
5. Transaction History
6. Technician Detail
7. Registration
8. Exit
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
	int tempSize;
	tempSize = sizeAppoint;

	Appointment* tempAppoint = new Appointment;
	const char* screen = R"===(
         APPOINTMENT
------------------------------
    )===";
	clearScreen(1000);
	cout << screen << endl;

	sizeAppoint++;
	tempAppoint->appointmentSet();
	tempAppoint->getServices()->registerService(pCust, sizeCustomer, pTech, sizeTechnician);

	tempAppoint->printAppointment();
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
		}
	}
}

void displayAllTechnician()
{

	const char* screen = R"===(
  ALL TECHNICIAN INFORMATION
------------------------------
    )===";
	cout << screen << endl;
	//cout << "techIDName" << endl;
	for (int i = 0; i < sizeTechnician; i++)
	{
		cout << pTech[i].getID() << "	" << pTech[i].getFirstName() << " " << pTech[i].getLastName() << endl;
	}
}


//a.Customer Registration
//     Name:
//     Gender:
//     Birth date:
//     Phone Number:
//     Email address:(Optional)
//
//   b.Technician Registration
//      Name:
//     Gender:
//     Birth date:
//     Field:
//
//   c.Service Registration
//     Name:
//     Price:
