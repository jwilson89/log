#include<string> 
#include<iostream>
#include <iomanip>
#include "ApplyTax.h"
double TotalCost(std::string name, int quantity, double cost)
{
	double discount_A = 0.10;
	double discount_B = 0.15;
	double discount_C = 0.20;
	double amountDiscounted = 0;
	double grandTotal = 0.0;


	std::string item_name = name;
	int amount_of_items = quantity;
	double item_cost = cost;
	double totalBeforeTax = item_cost * amount_of_items;
	int counter = 0;
	
	


		
		if (amount_of_items >= 100 && amount_of_items <= 200)
		{
			amountDiscounted = item_cost * amount_of_items * discount_A;
			totalBeforeTax = (item_cost * amount_of_items) - amountDiscounted;
			grandTotal += ApplyTax(totalBeforeTax);
			


		}


		else if (amount_of_items >= 200 && amount_of_items <= 300)
		{
			amountDiscounted = item_cost * amount_of_items * discount_B;
			totalBeforeTax = (item_cost * amount_of_items) - amountDiscounted;
			grandTotal += ApplyTax(totalBeforeTax);
			

		}

		else if (amount_of_items > 300)
		{
			amountDiscounted = item_cost * amount_of_items * discount_C;
			totalBeforeTax = (item_cost * amount_of_items) - amountDiscounted;
			grandTotal += ApplyTax(totalBeforeTax);
			


		}
		grandTotal = ApplyTax(totalBeforeTax);

	




	std::cout << "Your total is: " << grandTotal <<  std::endl;
	

	
	return grandTotal;

	
}