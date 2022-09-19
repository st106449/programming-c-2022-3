#include <iostream>;



int main()
{
	// x^4 + x^3 + x^2 + x + 1 = x^2(x^2 +x) + x^2 + x + 1 = (x^2 + 1)(x^2 + x) + 1. a = x^2 - первое умножение. (a + 1)(a + x) + 1 - второе умножение.
	int x = 0;
	int a = 0;
	std::cin >> x;
	a = x * x;
	std::cout << (a + 1) * (a + x) + 1 << std::endl;
	return 0;
}