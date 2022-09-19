#include <iostream>;



int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a;
	std::cin >> b;
	c = a;
	a = b;
	b = c;
	std::cout << a << " " << b << std::endl;
	return 0;
}