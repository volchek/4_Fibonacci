#include <iostream>


int fib(const int i) {
	if (i < 3) {
		return i - 1;
	}
	return fib(i - 1) + fib(i - 2);
}

int main() {
	for (int i = 0; i < 10; ++i){
		std::cout << fib(i) << std::endl;
	}
	
	system("pause");
	return 0;
}
