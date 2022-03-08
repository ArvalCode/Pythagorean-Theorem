#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

int main() {
	float a;
	float b;
	float c;

		std::cout << "A: ";
		std::cin >> a;

		std::cout << "\nB: ";
		std::cin >> b;

		float a2 = pow(a, 2);
		float b2 = pow(b, 2);

		double unrefined = a2 + b2;

		std::cout << "\nHypotnuse = " << sqrt(unrefined);
}
