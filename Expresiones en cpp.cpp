#include <iostream>
int main() {
	int a, b;

	std::cout << "Ingrese el n�mero para A: ";
	 std::cin >> a;

	std::cout << "Ingrese el n�mero para B: ";
	 std::cin >> b;

	int suma = 0;
	 suma = (a / b) + 1;

	 std::cout << "\nEl resultado de la operaci�n es: " << suma << std::endl;

	return 0;
}