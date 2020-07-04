#include <stdlib.h>
#include<iostream>
#include<string>
#include"Function.h"

	/*
	Julius Wilson
	BCS 120
	May 6th, 2020
	CH 6 HW

	*/


	using namespace std;


	int main()
	{
		
		int age = 0;
		string exit_value; // stops program


		do
		{
			string test = getName(); // stores the users full name.
			cout << test << endl;
			cout << "Enter your age: ";
			cin >> age;
			getAge(age);
			validateAge(age);
			printTicket(test, age);
			cout << "Would you like to continue? (enter any key to continue or enter exit to quit)";
			cin >> exit_value;


		} while (exit_value != "exit");

		cout << "Julius Wilson May 6th, 2020" << endl;

		
	
	return 0;
}