#include <iostream>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	std::cin >> n;
	switch (n / 100) {
	case 1:
		std::cout << "��� ";
		break;
	case 2:
		std::cout << "������ ";
		break;
	case 3:
		std::cout << "������ ";
		break;
	case 4:
		std::cout << "��������� ";
		break;
	case 5:
		std::cout << "������� ";
		break;
	case 6:
		std::cout << "�������� ";
		break;
	case 7:
		std::cout << "������� ";
		break;
	case 8:
		std::cout << "��������� ";
		break;
	case 9:
		std::cout << "��������� ";
		break;
	}
	switch (n / 10 % 10) {
	case 1:
		switch (n % 10) {
		case 0:
			std::cout << "������ �������" << std::endl;
			break;
		case 1:
			std::cout << "����������� �������" << std::endl;
			break;
		case 2:
			std::cout << "���������� �������" << std::endl;
			break;
		case 3:
			std::cout << "���������� �������" << std::endl;
			break;
		case 4:
			std::cout << "������������ �������" << std::endl;
			break;
		case 5:
			std::cout << "���������� �������" << std::endl;
			break;
		case 6:
			std::cout << "����������� �������" << std::endl;
			break;
		case 7:
			std::cout << "���������� �������" << std::endl;
			break;
		case 8:
			std::cout << "������������ �������" << std::endl;
			break;
		case 9:
			std::cout << "������������ �������" << std::endl;
			break;
		}
		break;
	case 2:
		std::cout << "�������� ";
		break;
	case 3:
		std::cout << "�������� ";
		break;
	case 4:
		std::cout << "����� ";
		break;
	case 5:
		std::cout << "��������� ";
		break;
	case 6:
		std::cout << "���������� ";
		break;
	case 7:
		std::cout << "��������� ";
		break;
	case 8:
		std::cout << "����������� ";
		break;
	case 9:
		std::cout << "��������� ";
		break;
	}
	if (n / 10 % 10 == 1)
	{
		goto end;
	}
	switch (n % 10) {
	case 1:
		std::cout << "���� �����" << std::endl;
		break;
	case 2:
		std::cout << "��� ������" << std::endl;
		break;
	case 3:
		std::cout << "��� ������" << std::endl;
		break;
	case 4:
		std::cout << "������ ������" << std::endl;
		break;
	case 5:
		std::cout << "���� �������" << std::endl;
		break;
	case 6:
		std::cout << "����� �������" << std::endl;
		break;
	case 7:
		std::cout << "���� �������" << std::endl;
		break;
	case 8:
		std::cout << "������ �������" << std::endl;
		break;
	case 9:
		std::cout << "������ �������" << std::endl;
		break;
	}
end:
	return EXIT_SUCCESS;
}