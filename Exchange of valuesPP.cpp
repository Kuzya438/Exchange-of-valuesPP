#include <iostream>
#include <cstdlib>

void swap(double& a, double& b) {
	a += b;
	b = a - b;
	a -= b;
}

int main() {
	double a = 5.6, b = 8.25;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return EXIT_SUCCESS;
}
