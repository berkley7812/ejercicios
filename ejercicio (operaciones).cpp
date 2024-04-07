#include <iostream>
#include <cmath>
int main()
{
	int cantSacos;
	std::cout << "Ingrese la cantidad de sacos: ";
	std::cin >> cantSacos;

	double libras = float(cantSacos) / 0.453592 * 25;
	    std::cout << "La cantidad de libras en cada saco de 25 kilos es: " << libras << std::endl;

	int pesos = cantSacos * 4500;
	    std::cout << "La cantidad de dinero que gana por cada saco en pesos chilenos es: " << pesos << std::endl;

	double dolares = pesos / 810.73;
	    std::cout << "La cantidad de dólares por la venta es: " << dolares << std::endl;
	
}