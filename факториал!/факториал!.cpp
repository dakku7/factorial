#include <iostream>

int factorial(int n) {

	if (n == 1) {
		return 1;
	}

	if (n == 0) {
		std::cout << "Zero cannot be!\n";
		return 0;
	}
	std::cout << n << " * "; 
	return n * factorial(n - 1);
}


int main() {

	std::cout << "Its a factorial program!\n";

	int n;

	std::cout << "Enter a number to calculate its factorial: "; std::cin >> n;

	std::cout << "You entered: " << n << "!" << std::endl;

	std:: cout <<  "1 = " << factorial(n);

	return 0;
}
