#include <iostream>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	std::cin >> n;
	switch (n / 100) {
	case 1:
		std::cout << "сто ";
		break;
	case 2:
		std::cout << "двести ";
		break;
	case 3:
		std::cout << "триста ";
		break;
	case 4:
		std::cout << "четыреста ";
		break;
	case 5:
		std::cout << "пятьсот ";
		break;
	case 6:
		std::cout << "шестьсот ";
		break;
	case 7:
		std::cout << "семьсот ";
		break;
	case 8:
		std::cout << "восемьсот ";
		break;
	case 9:
		std::cout << "девятьсот ";
		break;
	}
	switch (n / 10 % 10) {
	case 1:
		switch (n % 10) {
		case 0:
			std::cout << "десять бананов" << std::endl;
			break;
		case 1:
			std::cout << "одиннадцать бананов" << std::endl;
			break;
		case 2:
			std::cout << "двенадцать бананов" << std::endl;
			break;
		case 3:
			std::cout << "тринадцать бананов" << std::endl;
			break;
		case 4:
			std::cout << "четырнадцать бананов" << std::endl;
			break;
		case 5:
			std::cout << "пятнадцать бананов" << std::endl;
			break;
		case 6:
			std::cout << "шестнадцать бананов" << std::endl;
			break;
		case 7:
			std::cout << "семнадцать бананов" << std::endl;
			break;
		case 8:
			std::cout << "восемнадцать бананов" << std::endl;
			break;
		case 9:
			std::cout << "девятнадцать бананов" << std::endl;
			break;
		}
		break;
	case 2:
		std::cout << "двадцать ";
		break;
	case 3:
		std::cout << "тридцать ";
		break;
	case 4:
		std::cout << "сорок ";
		break;
	case 5:
		std::cout << "пятьдесят ";
		break;
	case 6:
		std::cout << "шестьдесят ";
		break;
	case 7:
		std::cout << "семьдесят ";
		break;
	case 8:
		std::cout << "восемьдесят ";
		break;
	case 9:
		std::cout << "девяносто ";
		break;
	}
	if (n / 10 % 10 == 1)
	{
		goto end;
	}
	switch (n % 10) {
	case 1:
		std::cout << "один банан" << std::endl;
		break;
	case 2:
		std::cout << "два банана" << std::endl;
		break;
	case 3:
		std::cout << "три банана" << std::endl;
		break;
	case 4:
		std::cout << "четыре банана" << std::endl;
		break;
	case 5:
		std::cout << "пять бананов" << std::endl;
		break;
	case 6:
		std::cout << "шесть бананов" << std::endl;
		break;
	case 7:
		std::cout << "семь бананов" << std::endl;
		break;
	case 8:
		std::cout << "восемь бананов" << std::endl;
		break;
	case 9:
		std::cout << "девять бананов" << std::endl;
		break;
	}
end:
	return EXIT_SUCCESS;
}