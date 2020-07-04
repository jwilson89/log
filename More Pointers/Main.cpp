#include <iostream>
#include <string>
#include <time.h>
#include <algorithm>
using namespace std;
long factorial(long num);
void swapIt(int* x, int pos1, int pos2);
int* duplicates(int* x, int SIZE);
void Alpha(int* x, int SIZE);
void Bravo(int* x, int SIZE);
int* Charlie(int SIZE);
double Delta(double* x, int SIZE);
int missingNum(int* x, int SIZE, int start, int finish);


int main() {
	srand(time(NULL));

	const int SIZE = 10;
	int Echo[SIZE];
	for (int i = 0; i < 10; i++) {
		Echo[i] = i + 1;
	}
	for (int k : Echo) {
		cout << k << " ";
	}
	cout << endl;

	int* ptr1 = Echo;
	int* ptr2 = Echo;
	cout << ptr1 << "this is the memory location that ptr1 contains: " <<"\n";
	cout << ptr2 << "this is the memory location that ptr2 contains: " << "\n";
	cout << &Echo <<" this is Echo's memory location: "  <<"\n";
	cout << &Echo[0] << " &Echo[0] memory location: " << endl;

	


	for (int i = 0; i < SIZE; i++) {
		*(ptr1 + i) = 5;
	}
	for (int i = 0; i < SIZE; i++) {
		cout << *(ptr2 + i) << " ";
	}
	cout << endl;

	int* info = new int[22]{ 1, 3, 3, 5, 6, 3, 5, 2, 4, 1, 4, 2, 3, 1, 1, 5, 6, 2, 6, 3, 1, 6, };
	int n = sizeof(info) * 22;
	cout << n << " sizeof(info) \n";
	sort((info + 0), (info + 21));
	int dupe = 0;
	for (int i = 0; i < 21; i++)
	{
		if (*(info + i) == *(info + i - 1))
		{
			dupe += *(info + i);
		}
		else
		{
			cout << "no duplicates detected: \n";
		}
		cout << *(info + i);

	}

	int* duplicateValues = duplicates(info, 22);
	for_each(duplicateValues, duplicateValues + 10, [](int out) {cout << out << " "; });
	cout << endl;


	for (int i = 0; i < SIZE; i++)// loop goes one higher to disengage the loop.
	{
		cout << Echo[i] << " Echo[i] 's value currently. " << endl;
	}




}

long factorial(long num) {
	long fact = 1;
	for (int i = 1; i <= num; i++) {
		fact *= i;
	}
	return fact;
}

void swapIt(int* x, int pos1, int pos2) {
	int holder = x[pos2];
	x[pos2] = x[pos1];
	x[pos1] = holder;
}

void Alpha(int* x, int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		x[i] = (1 + i) * (1 + i);
	}
}

void Bravo(int* x, int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		*(x + i) = (1 + i) * (1 + i);
	}
}

int* Charlie(int SIZE) {
	int* nums = new int[SIZE];
	for (size_t i = 0; i < SIZE; i++) {
		nums[i] = rand() % 1000;
	}
	return nums;
}

double Delta(double* x, int SIZE) {
	double avg = 0;
	for (int i = 0; i < SIZE; i++) {
		avg += x[i];
	}
	return avg / SIZE;
}

int missingNum(int* x, int SIZE, int start, int finish) {
	int fullTotal = 0, partialTotal = 0;

	for (int i = start; i <= finish; i++) {
		fullTotal += i;
	}
	for (size_t i = 0; i < SIZE; i++) {
		partialTotal += x[i];
	}
	return fullTotal - partialTotal;
}

int* duplicates(int* x, int SIZE) {
	int* vals = new int[10]{ 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < SIZE; i++) {
		vals[x[i] - 1]++;

		
	}
	return vals;
}