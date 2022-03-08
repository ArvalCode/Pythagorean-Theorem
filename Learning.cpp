#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <Windows.h>

int main() {
	std::string input;
	int a, b, h, result;

	std::cout << "What do you want to solve? (A/Hypotnuse)\n";
	std::cin >> input;

	if (input == "Leg") {
		system("cls");
		std::cout << "Hypotnuse: ";
		std::cin >> h;

		std::cout << "\nB: ";
		std::cin >> b;

		result = sqrt(pow(h, 2) - pow(b, 2));
		
		std::cout << "Leg = " << result;
	}
	else if (input == "Hypotnuse") {
		system("cls");
		std::cout << "A = ";
		std::cin >> a;
		
		std::cout << "\nB = ";
		std::cin >> b;

		result = sqrt(pow(a, 2) + pow(b, 2));
		
		std::cout << "Hypotnuse = " << result;
	}
}
