#include <iostream>
#include <time.h>
int x = 0;
using namespace std;
int main() {
	time_t start, end;
	time(&start);
	setlocale(0, "Russian");

	int a[] = { 9, 4, 8, 3 };
	// size of array 
	int n = sizeof(a) / sizeof(a[0]);


	// loop through the entire array 
	for (int i = 0; i < n - 1; i++)
	{
		// loop through the array elements 
		for (int j = 0; j < n - i - 1; j++)
		{
			// compare adjacent elements 
			if (a[j] > a[j + 1])
			{
				// swap elements 
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	time(&end);
	double seconds = difftime(end, start);
	printf("The time: %f seconds\n", seconds);
}
