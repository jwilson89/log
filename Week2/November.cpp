#include<iostream>
int November(int score)
{
	char grade = score;
	score = grade;

	if (grade >= 90 && grade <= 100)
	{
		std::cout << "you got an A! " << std::endl;
		grade = 'A';
	}

	else if (grade >= 80 && grade <= 89)
	{
		std::cout << "you got a B! " << std::endl;
		grade = 'B';
	}

	else if (grade >= 70 && grade <= 79)
	{
		std::cout << "you got a C! " << std::endl;
		grade = 'C';
	}


	else
	{
		std::cout << "you did not pass! " << std::endl;
		grade = 'F';
		
	}
	

	return grade;

}