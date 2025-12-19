#include <iostream>

using namespace std;
int sum(int A, int B) {
	return A + B;
}

int main() {
	setlocale(0, "Russian");
	int a = 0, b = 0;
	cout << "Выберете значение переменных a и b:";
	cin >> a >> b;
	cout << sum(a, b);
}
