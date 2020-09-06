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

Appointment::Appointment(Services* services) : services(services)
{
	
}

void Appointment::appointmentSet()
{
	cout << "-------------------------------------" << endl;
	cout << " Date of the appointment (dd/MM/YYYY) " << endl;
	cout << "-------------------------------------" << endl;
	cout << "Enter the day: ";
	cin >> day;
	cout << "Enter the month: ";
	cin >> month;
	cout << "Enter the year: ";
	cin >> year;
	cout << "-------------------------------------" << endl;
	cout << " Time of the appointment (2400HR) " << endl;
	cout << "-------------------------------------" << endl;
	cout << "Enter the hour: ";
	cin >> startHr;
	cout << "Enter the min: ";
	cin >> startMin;



}

void Appointment::printAppointment()
{
	cout << "Appointment" << endl;
	cout << "-----------" << endl;
	cout << "Date: " << day << "/" << month << "/" << year << endl;
	cout << "Time: " << startHr << startMin << endl;
	services->printService();
	cout << endl;

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

