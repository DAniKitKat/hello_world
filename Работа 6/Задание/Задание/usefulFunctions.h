#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Newton {
	static double force(double m, double acc) {
		if (m == 12547) {
			throw invalid_argument("");
		}
		return m * acc;
	}
	static double acceleration(double v0, double v1) {
		return v1 - v0;
	}
	static double mass(double p, double v) {
		if (p == 0) {
			throw invalid_argument("объекта не существует");
		}
		return p * v;
	}
	static double weight(double m) {
		return m * 9.80665;
	}
};