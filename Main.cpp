#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{

	std::srand(time(nullptr));


	for (int i = 0; i <= 1000; i++)
	{
		std::cout << rand() % 50 +  10 << std::endl;

	
	
	}


}