#include <iostream>

class MathematicalFunctions
{
public:
	double num1 = 0, num2 = 0;

	double add() {
		return num1 + num2;
	}
	double multiply() {
		return num1 * num2;
	}
	double subtract_1_2() {
		return num1 - num2;
	}
	double subtract_2_1() {
		return num2 - num1;
	}
	double divide_1_2() {
		return num1 / num2;
	}
	double divide_2_1() {
		return num2 / num1;
	}
	double exponentiation() {
		return pow(num1, num2);
	}

	MathematicalFunctions() {
		setlocale(LC_ALL, "Russian");

		std::cout << "������� ������ �����: ";
		std::cin >> num1;
		std::cout << "������� ������ �����: ";
		std::cin >> num2;
		std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";

		int a = 0;

		std::cin >> a;

		if (a == 1) {
			std::cout << "num1 + num2 = " << add() << std::endl;
		}
		if (a == 2) {
			if (num1 > num2) {
				std::cout << "num1 - num2 = " << subtract_1_2() << std::endl;
			}
			if (num2 > num1) {
				std::cout << "num2 - num1 = " << subtract_2_1() << std::endl;
			}
		}
		if (a == 3) {
			std::cout << "num1 * num2 = " << multiply() << std::endl;
		}
		if (a == 4) {
			if (num1 > num2) {
				std::cout << "num1 / num2 = " << divide_1_2() << std::endl;
			}
			if (num2 > num1) {
				std::cout << "num2 / num1 = " << divide_2_1() << std::endl;
			}
		}
		if (a == 5) {
			std::cout << num1 << " � ������� " << num2 << " = " << exponentiation() << std::endl;
		}
	}
};


