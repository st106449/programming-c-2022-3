#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
		int a = 0;
		std::cout << "Введите ваше число <10000" << std::endl;
		std::cin >> a;
		std::cout << " Следующее за " << a << " число - " << a + 1 << std::endl;
		std::cout << " Предыдущее " << a << " число - " << a - 1 << std::endl;
		return 0;
}