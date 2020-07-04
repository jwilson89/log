#include "ABSValue.h"
int ABSValue(int x)
{
	if (x >= 0)
	{
		x = x;
	}
	else if (x < 0)
	{
		x = x * (-1);
		
	}

	else
	{
		cout << "error." << endl;
	}
	return x;

}