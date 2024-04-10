#include <iostream>
int main() {
	int a, b;

	std::cout << "Ingrese el número para A: ";
	 std::cin >> a;

	std::cout << "Ingrese el número para B: ";
	 std::cin >> b;

	int suma = 0;
	 suma = (a / b) + 1;

	 std::cout << "\nEl resultado de la operación es: " << suma << std::endl;

	return 0;
}
