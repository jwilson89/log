#include<string>
#include<iostream>
#include "Color.h"
using namespace std;

void Color()
{
	string favoriteColor;
	cout << "What is your favorite color? ";
	cin >> favoriteColor;
	if (favoriteColor == "red")
	{
		cout << "Poor choice!" << endl;
	}

	else if (favoriteColor == "blue")
	{
		cout << "Great choice." << endl;
	}

	else if (favoriteColor == "green")
	{
		cout << "Not a bad choice." << endl;
	}

	else
	{
		cout << "Sorry, that's not a primary color. " << endl;

	}
}