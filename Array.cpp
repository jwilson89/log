#include "Array.h"
void Array(int* arr)
{
	for (int i = 0; i < 10; i++)
	{
		*(arr + i) = i * i;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("Contents of the array:");
	}
}