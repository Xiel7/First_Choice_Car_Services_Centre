#include "Appointment.h"

#include <iostream>
#include <string>


Appointment::Appointment()
{

}

Appointment::Appointment(int day, int month, int year, int startHr, int startMin, Services* services): services(services)
{
	this->day = day;
	this->month = month;
	this->year = year;
	this->startHr = startHr;
	this->startMin = startMin;
}


void Appointment::dateValidation(int d, int m, int y, int* valid)
{
	if (d < 0 || d > 31 || m < 0 || m > 12 || (d > 29 && m == 2 && y % 4 != 0) || (d > 30 && m == 2 && y % 4 == 0) || (d > 30 && m == 4) || (d > 30 && m == 6) || (d > 30 && m == 9) || (d > 30 && m == 11))
	{
		cout << "Invalide date! Please enter valid date. " << endl;
		*valid = 0;
	}
	else
		*valid = 1;
}

void Appointment::timeValidation(int inHr, int inMin, int* valid)
{
	if (inHr < 8 || inHr > 20 || inMin < 0 || inMin > 59)
	{
		cout << "Invalide time! Please enter valid time." << endl;
		*valid = 0;
	}
	else
		*valid = 1;
}

void Appointment::appointmentSet()
{
	int valid = 1;
	cout << "-------------------------------------" << endl;
	cout << " Date of the appointment (dd/MM/YYYY) " << endl;
	cout << "-------------------------------------" << endl;

	do {

		
		cout << "Enter the day (dd): ";
		cin >> day;
		cout << "Enter the month (MM): ";
		cin >> month;
		cout << "Enter the year (YYYY): ";
		cin >> year;
		dateValidation(day, month, year, &valid);
		
	} while (valid == 0);
	
	cout << "-------------------------------------" << endl;
	cout << " Time of the appointment (2400HR) " << endl;
	cout << "-------------------------------------" << endl;

	do {
		cout << "Enter the hour: ";
		cin >> startHr;
		cout << "Enter the min: ";
		cin >> startMin;
		timeValidation(startHr, startMin, &valid);
	} while (valid == 0);
	


}

void Appointment::printAppointment()
{	
	cout << "\n";
	cout << "Appointment" << endl;
	cout << "-----------" << endl;
	cout << "Date: " << day << "/" << month << "/" << year << endl;
	cout << "Time: " << startHr << startMin << endl;
	services->printService();
	cout << endl;
	cout << "\n";
}

//set gets

void Appointment::setDay(int d)
{
	day = d;
}


int Appointment::getDay()
{
	return day;
}

void Appointment::setMonth(int m)
{
	month = m;
}

int Appointment::getMonth()
{
	return month;
}

void Appointment::setYear(int y)
{
	year = y;
}

int Appointment::getYear()
{
	return year;
}
void Appointment::setStartHr(int hr)
{
	startHr = hr;
}

int Appointment::getStartHr()
{
	return startHr;
}

void Appointment::setStartMin(int min)
{
	startMin = min;
}

int Appointment::getStartMin()
{
	return startMin;
}


void Appointment::setServices(Services* services)
{
	this->services = services;
}

Services* Appointment::getServices()
{
	return services;
}

