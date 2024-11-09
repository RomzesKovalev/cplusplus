#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
int main() {
	float x, y, S, R, C;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;
	std::cin.get();
	R = sin((M_PI / 3) * x);
	S = x * log10(cbrt(abs(y)));
	std::cout << "R = " << R << "; S = " << S << std::endl;
	C = std::max(R, S);
	std::cout << C << std::endl;
	std::cout << "Press Enter to leave...";
	std::cin.get();
	return 0;
}