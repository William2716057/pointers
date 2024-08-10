#include <iostream>

int main() {
	int var = 20;
	int* ptr;


	ptr = &var;

	std::cout << "variable value " << var << std::endl;
	std::cout << "variable address " << &var << std::endl;

	std::cout << "pointer value (address stored) " << ptr << std::endl;
	std::cout << "value pointer is pointing to " << *ptr << std::endl;

	return 0;

}