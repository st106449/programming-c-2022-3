#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
		int a = 0;
		std::cout << "������� ���� ����� <10000" << std::endl;
		std::cin >> a;
		std::cout << " ��������� �� " << a << " ����� - " << a + 1 << std::endl;
		std::cout << " ���������� " << a << " ����� - " << a - 1 << std::endl;
		return 0;
}