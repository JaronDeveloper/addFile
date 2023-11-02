#include "MathematicalFunctions.h"

int main() {	   
	setlocale(LC_ALL, "Russian");

	double a, b;
	
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";

	int create = 0;
	std::cin >> create;

	switch (create)
	{
		case 1:
		 std::cout << add(a, b) << std :: endl;
		  break;
		case 2:
			if (a > b) {
				std::cout << subtract_1_2(a, b) << std::endl;
			}
			else {
				std::cout << subtract_2_1(b, a) << std::endl;
			}			
		  break;
		case 3:
			std::cout << multiply(a, b) << std::endl;
			break;
		case 4:
			if (a > b) {
				std::cout << divide_1_2(a, b) << std::endl;
			}
			else {
				std::cout << divide_2_1(b, a) << std::endl;
			}
			break;
		case 5:
			std::cout << exponentiation(a, b) << std::endl;
			break;
		default:
			std::cout << "Неверное число!" << std::endl;
	}	
}