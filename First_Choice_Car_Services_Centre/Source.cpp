#include <iostream>
#include"Person.h"
#include "Services.h"
#include "Customer.h"
#include "Technician.h"
#include "Car.h"
#include <string>
#include "Source.h"

using namespace std;

void logoScreen();

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

	/*Car nissan("WXY201");
	
	Technician* techkun;
	techkun = new Technician("Tech", "Kun", "TC1001");

	
	Customer* bakayarou;
	bakayarou = new Customer(nissan, "Baka", "Yarou", "CT0001");

	Services* service = NULL;

	service = new Services("TC1001", "Car Wash", bakayarou, techkun);

	service->printService();*/

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
	service[0] = Services();

	cust[0].printInfo();
	logoScreen();

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
