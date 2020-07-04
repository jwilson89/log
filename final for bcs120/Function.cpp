
#include <stdlib.h>
#include"Function.h"
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

/*
Julius Wilson
BCS 120
May 6th, 2020
FINAL

*/
using namespace std;


string getName()
{
	string first_name, middle_name, last_name;
	cout << "Please enter your full name: ";
	cin >> first_name >> middle_name >> last_name;
	string full_name = first_name + " " + middle_name + " " + last_name;
	return  full_name;
}

void getAge(int &age)
{
	age = age; // keeps age the same value.
	if (age > 100)
	{
		cout << "You aren't that old are you really??" << endl;
	}

	else if (age < 0)
	{
		cout << "INVALID AGE! Program Will Now Exit." << endl;
		
	}


}


void printTicket(string name, int age)
{
	double ticket_price = 0.0;
	cout << "Hello you are " << name << " " << age << " years old.   " << endl;



	if (age <= 13)
	{
		ticket_price = 9.99;
	}

	else if ((age > 13) && (age < 65))
	{
		ticket_price = 19.99;
	}

	else if (age >= 65)
	{
		ticket_price = 12.99;
	}




	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << name << ", Since your age is: " << age << " Your Ticket price is: " << ticket_price << " dollars" << endl;
}

int validateAge(int &age)
{
	if (age <= 0)
	{
		exit(3);
	}

}