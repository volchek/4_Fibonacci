#include <iostream>


int fib(const int i) {
	if (i < 3) {
		return i - 1;
	}
	return fib(i - 1) + fib(i - 2);
}

int main() {
	std::cout << fib(1) << std::endl;
	std::cout << fib(2) << std::endl;
	std::cout << fib(3) << std::endl;
	std::cout << fib(4) << std::endl;
	std::cout << fib(5) << std::endl;
	std::cout << fib(6) << std::endl;
	std::cout << fib(7) << std::endl;

	system("pause");
	return 0;
}
