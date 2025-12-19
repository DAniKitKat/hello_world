#include <iostream>
#include <time.h>

using namespace std;
int main() {
	int x = 9;
	try {
		float y = x/0;
	}
	catch (...) {
		throw;
	}
	clock_t start = clock();
	setlocale(0, "Russian");

	int a[] = { 9, 4, 8, 3 };
	int n = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {	
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	clock_t end = clock();
	double seconds = (double)(end - start) / CLOCKS_PER_SEC;
	printf("The time: %f seconds\n", seconds);
}
