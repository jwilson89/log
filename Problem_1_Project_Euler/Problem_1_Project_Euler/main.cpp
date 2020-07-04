#include<iostream>
using std::cout;
using std::endl;

int main()
{

	int total = 0;
	
	for (int i = 999; i != 0;  i--)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			cout << i << endl;
			total += i;
		}
	}
	cout << total << endl;
	return 0;
}