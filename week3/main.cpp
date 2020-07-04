#include<iostream>
#include "Factorial.h"
#include "ApplyTax.h"
#include "TotalCost.h"
#include<iomanip>
#include <string>

int main()
{

	int output_factorial = factorial(5);
	double taxCalc = ApplyTax(115.32);
	std::string nameA = " ";
	std::string nameB = " ";
	std::string nameC = " ";

	int quantityA = 0;
	int quantityB = 0;
	int quantityC = 0;

	double costA = 0.0;
	double costB = 0.0;
	double costC = 0.0;

	int counter = 0;
	double purchase = 0.0;
	double purchaseB = 0.0;
	double purchaseC = 0.0;

	
	std::cout << " taxCalc " << std::fixed  <<  std::setprecision(2) << taxCalc << std::endl;
	std::cout << "output_factorial " << output_factorial << std::endl;
	std::cout << " Please enter three arguments and the function will find your Total Cost.\n It will run three times:\n ";
	
	//double Purchase = TotalCost(name, quantity, cost);

	while(counter <= 3)
	{
		std::cout << " Enter item name, quantity, and cost: " << std::endl;
		std::getline(std::cin, nameA);
		std::cin >> quantityA;
		std::cin >> costA;
		purchase =	TotalCost(nameA, quantityA, costA);
		 counter++;

		std::cout << "counter is now: " << counter << std::endl;
		std::cout << "your total cost including tax is: " << purchase <<"  You bought: " << nameA <<  "the quantity purchased was: " << quantityA <<  std::endl;
		//counter += counter++;


		std::cout << " Enter item name, quantity, and cost: " << std::endl;
		std::getline(std::cin, nameB);
		std::cin >> quantityB;
		std::cin >> costB;
		purchaseB = TotalCost(nameB, quantityB, costB);
		counter++;
		std::cout << "counter is now: " << counter << std::endl;
		std::cout << "your total cost including tax is: " << purchaseB << "  You bought: " << nameB << "the quantity purchased was: " << quantityB << std::endl;
		//counter += counter++;


		std::cout << " Enter item name, quantity, and cost: " << std::endl;
		std::getline(std::cin, nameC);
		std::cin >> quantityC;
		std::cin >> costC;
		purchaseC = TotalCost(nameC, quantityC, costC);
		counter++;
		std::cout << "counter is now: " << counter << std::endl;
		std::cout << "your total cost including tax is: " << purchaseC << "  You bought: " << nameC << "the quantity purchased was: " << quantityC << std::endl;







		/*if (counter == 1)
		{
			std::string captured_name = name;
			int captured_quantity = quantity;
			double captured_cost = cost;
			purchaseB = TotalCost(name, quantity, cost);
		}

		else if (counter == 2)
		{
			std::string captured_nameB = name;
			int captured_quantityB = quantity;
			double captured_costB = cost;
			purchaseC = TotalCost(name, quantity, cost);
		}
		counter++;*/
		std::cout << "counter is now: " << counter << std::endl;

	}
	
	return 0;
}