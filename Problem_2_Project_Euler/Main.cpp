#include <iostream>
#include "Seq.h"
using std::endl;
using std::cout;

int main()
{
	//const int SIZE = 12;
	//int arr[SIZE];
	//int fibOne = 0;
	//int fibTwo = 0;
	//int nextNum = 0;
	//int temp = 0;
	//nextNum = temp;
	// temp = (counter) + ((counter - 1) + counter);
	//int fibSeq = (nextNum - 1) + (nextNum);

	//for (int counter = 3; (counter < 10); counter++)
	//{
	//	cout << fibOne << " is fibOne:\n";
	//	cout << fibTwo << "is fibTwo:\n";
	//	//temp = (counter) + (counter - 1 + counter);
	//	nextNum = ( counter )+(counter - 1);
	//	cout << nextNum << "is nextNum:\n";
	//
	//	
	//}

	/*for (int counter = 0; counter < 12; counter++)
	{
		arr[counter] = fibTwo + 
	}

	for (int each_item : arr)
	{
		cout << each_item << endl;
	}*/
	//int factorial = 1;
	//for (int i = 1; i < 12; i++)
	//{  
	//	// given fibOne and fibTwo are 1 and 2 find the next number and finish the fibonacci sequence.
	//	
	//	factorial *= i;
	//	cout << factorial << " is factorial and i is currently: " << i << "\n" << endl;
		//int sum = 0;
	 int* arr = new int[35];
		 seq(arr,1, 2, 35);

		
		 delete[] arr;
		 arr = nullptr;
		return 0;

		
		
	}
	
	

