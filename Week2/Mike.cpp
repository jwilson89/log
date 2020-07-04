#include<iostream>


bool Mike(int number) 
{
	bool isPrime = true;
	for (int j = number; j <= number / 2; j++)
	{
		 //isPrime = true;
		for (int k = number; k < j; k++)
		{
			if (j % k == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			std::cout << j << "  is prime " << std::endl;
		}
		else
		{
			std::cout << j << "is not prime." << std::endl;
		}

	}
    return isPrime;
}
