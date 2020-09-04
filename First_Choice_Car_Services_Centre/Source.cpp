#include <iostream>
#include <stdlib.h>
#include <string>
#include <Windows.h>

#include"Person.h"
#include "Services.h"
#include "Manager.h"
#include "Customer.h"
#include "Technician.h"
#include "Car.h"
#include "Source.h"

using namespace std;


int main()
{


	/*string codeName = "TC";
	int code = 1001;
	string names[2];

	string c = codeName + to_string(code);

	names[0] = "Song Kai";
	names[1] = "Eow";
	
	cout << names[0] + " " + names[1] << endl;
	cout << c;*/
	int sizeManager = 3;
	Manager* manager;
	manager = new Manager[sizeManager];
	manager[0] = Manager("ImNikeer", "Nikeer123", "Nike", "Er", "MG1001");
	manager[1] = Manager("DidiHere", "Urdidi", "En Di", "Loh", "MG1002");
	manager[2] = Manager("BoiLee", "Boiboi3253", "Chong Wai", "Lee", "MG1003");

	Car* cars;
	cars = new Car[10];
	cars[0] = Car("WXY101");
	cars[1] = Car("WTX3145");
	cars[2] = Car("VES2651");
	cars[3] = Car("GJD3101");
	cars[4] = Car("KFS4385");
	cars[5] = Car("MCD74");
	cars[6] = Car("WWW1");
	cars[7] = Car("SGF562");
	cars[8] = Car("WSH1031");
	cars[9] = Car("WXT9985");

	Customer* cust;
	cust = new Customer[10];
	cust[0] = Customer(cars[0], "Baka", "Yarou", "CT0001");
	cust[1] = Customer(cars[1], "Soon Rong", "Tan", "CT0002");
	cust[2] = Customer(cars[2], "Ken", "Wong", "CT0003");
	cust[3] = Customer(cars[3], "Benny", "Loh", "CT0004");
	cust[4] = Customer(cars[4], "Kamal", "Ahri", "CT0005");
	cust[5] = Customer(cars[5], "Ali", "Yan", "CT0006");
	cust[6] = Customer(cars[6], "Muthu", "Sini", "CT0007");
	cust[7] = Customer(cars[7], "Song Kai", "Eow", "CT0008");
	cust[8] = Customer(cars[8], "Aaron", "Chia", "CT0009");
	cust[9] = Customer(cars[9], "Lei Hou", "Keng", "CT0010");

	Technician* tech;
	tech = new Technician[5];
	tech[0] = Technician("Sai Seng", "Wong", "TC0001");
	tech[1] = Technician("Ramli", "Kao", "TC0002");
	tech[2] = Technician("Ali", "Gin", "TC0003");
	tech[3] = Technician("Steady", "Bro", "TC0004");
	tech[4] = Technician("Speed", "Run", "TC0005");

	Services* service;
	service = new Services[10];

	int valid = 0; //for do while loop 


	logoScreen();//Logo Screen
	clearScreen(1500);
	do {
		managerLoginScreen(manager, &valid, sizeManager);

	} while (valid == 0);
	clearScreen(1000);




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

void managerLoginScreen(Manager *manager, int *valid, int sizeManager)
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
		if (userName.compare(manager[i].getUsername()) == 0 && password.compare(manager[i].getPassword()) == 0)
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
    )===";
	cout << screen << endl;
}

void clearScreen(double n)
{
	Sleep(n);
	system("CLS");
}