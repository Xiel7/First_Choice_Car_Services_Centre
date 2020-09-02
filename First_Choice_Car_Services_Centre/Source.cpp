#include <iostream>
#include"Person.h"
#include "Customer.h"
#include "Technician.h"
#include "Car.h"
#include <string>

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

	Car nissan("WXY201");
	
	Technician techkun("Tech", "Kun", "TC1001");
	Customer bakayarou(nissan, "Baka", "Yarou", "CT0001");


	bakayarou.printInfo();
	techkun.printInfo();

	return 0;
	//master
}