#include "Seq.h"
//int* seq(int start1, int start2, int numOfSpots)
//{
//	int* fib = new int[numOfSpots];
//	int fibOne = start1;
//	int fibTwo = start2;
//	int* sum = 0;
//	*(fib + 0) = 1;
//	*(fib + 1) = 2;
//
//	/**(sum + 0) = fibOne;
//	*(sum + 1)  = fibTwo;*/
//	//int i = 2;
//
//	for (int i = 2; i < numOfSpots; i++)
//	{
//		*(fib + i) = *(fib + i) + *(fib - 1);
//
//		*sum += *(fib + i);
//		cout << *(fib + i);
//
//	}
//	
//	return 0;
//	
//}

void seq( int* arr, int start1,  int start2, int numOfSpots)
{
	int* fib = new int[numOfSpots];
	*(fib + 0) = start1;
	*(fib + 1) = start2;
	 int sum = *(fib + 1);

	cout << "*(fib + 0): " << *(fib + 0) << "\n";
	cout << "*(fib + 1): " << *(fib + 1) << "\n";

	for ( int i = 2; i < numOfSpots; i++)
	{
		//int sum = *(fib + 1);

		*(fib + i) = *(fib + i - 2) + *(fib + i - 1);
		cout << "This is fib before tested: " << *(fib+ i) << "\n";
		
		for (int j = 0; j < 1; j++)
		{
			if (*(fib + i) % 2 == 0)
			{
				cout << *(fib + i) << " getting assigned to sum: *(fib + i)\n";

				sum += *(fib + i);

				

				cout << " current value of sum: of even fibs: " << sum << '\n';

			}
		}
		
		cout << "This is fib after tested: " << *(fib + i) << endl;


	}

}