#include <iostream>
#include<ctime>
int main()
{
	srand(time(nullptr));
	int bottom = 0;
	int* ptrBottom = &bottom;
	int top = 100;
	int* ptrTop = &top;
	std::cout << "Pointer:  " << ptrBottom << "  pointer-value:   " << *(ptrTop) << "\n";
	const int size = 10;
	int bin[10];
	int* binLoc = &bin[0];
	int* binLoc2 = &bin[9];
	std::cout << (int)binLoc << "\n" << (int)binLoc + 6 << "\n" << (int)(binLoc2 - binLoc) << " the difference between both:\n";
	int total = 0;


	for (int i = 0; i < 10; i++)
	{
		*(bin + i) = rand () % 100 + 1;
		std::cout << *(bin + i) << "\n";
		total += *(bin + i);
	}
	std::cout << " total is: " << total << "\n";

}

//for(int i = 0; i < *ptrTop; i++)
//{
//	std::cout << *()
//}


// look up how to use pointers in for loops, do-while loops and while loops.