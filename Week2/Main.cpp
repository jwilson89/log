//(DONE)Use a for loop to list Celsius and Fahrenheit temperatures.The "C" should be from - 20 to 20 and the F should be shown correspondingly(F = (9 / 5) * C + 32).
//(DONE)The Fibonacci sequence is : 1, 1, 2, 3, 5, 8, 13, 21, etc.Use a for loop to list the first 20 Fibonacci numbers.
//(????????)Create a function called Mike that takes in int number and returns true if it is prime and false otherwise.
//(DONE)Create a function called November that takes in an int grade.If grade is between 90 and 100 it should output “You got an A”.If grade is between 80 and 89 it should output “You got a B”.If grade is between 70 and 79 it should output “You got a C”.If grade is lower than 70 it should output, “You did not pass”.
//(?????????)Create a function called QuadraticFormula that takes in a, b, and cand does the quadratic formula.It should first check that b2 - 4ac is not negative; if it is, end the program.If it is not, output to the console the two solutions.
//Create a function called DieRoll.It should create a random number between 1 and 6 and return the result.
//Create a function called MultyDieRoll.It should take in an integer and run the function DieRoll that number of times, printing out each result to the console.
//Create a function called Swap.It should take in two numbers by reference(use the & operator for this) and ensure that firstNum is the larger oneand secondNum is the smaller one.
//Create a function called checkSquares.It should take in two numbers bottomand top.It should output to the console any numbers in the range from bottom to top that are perfect squares.So if you take in 5 to 20 it should output 9 and 16 to the console.
//Create a function called Factor.It should output to the console all the factors of a number.So, if you receive 15, it should output 1, 3, 5.
//Discussion Board
//Module 2 Discussion

#include<iostream>
#include<cstdlib>
#include <time.h>
#include<iomanip>
#include "Mike.h"
#include "November.h"


int main()
{
	int Mike_Number = 1;
	
	/*std::srand(time(NULL));
	int i = rand();
	std::cout << i << std::endl;
	*/
	double  Fahrenheit;
	

	

	double F = 0;

	

	std::cout << std::setprecision(1) << std::fixed << std::right;
	

	for (int Celcius = -20; Celcius <= 20; Celcius++)
	{
		// Convert from celcius to fahrenheit.
		Fahrenheit = ((9.0 / 5) * Celcius) + 32;
		std::cout << std::setw(2) << Celcius << "\t\t" << Fahrenheit << std::endl;
	}
	std::cout << "Celcius------Fahrenheit\n ";

	int num1 = 0,  num2 = 1,  nextNum = num1 + num2;
	//std::cout << num1 << " is num1.   " <<  num2 << " is num2.   " << num3 << "  is num3: " << std::endl;
	std::cout << num1 << " is  num1 " << num2 << " is num2 " << std::endl;
	
	for (int i = 0; i <= 20; i++)
	{
		std::cout << nextNum << ", " << std::endl;
		num1 = num2;
		num2 = nextNum;
		nextNum = num1 + num2;

	}

	int prime_number_test = Mike(Mike_Number); // incorrect output last class barely covered this.

	if (prime_number_test == true)
	{
		std::cout << " number is prime." << std::endl;
	}

	else
	{
		std::cout << "number is not prime." << std::endl;
	}

	Mike(Mike_Number);

	char grade = November(70);
	std::cout << grade << std::endl;





	return 0;
}