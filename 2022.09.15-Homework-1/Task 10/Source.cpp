#include <iostream>;



int main()
{
	int a = 0;
	int b = 0;
	int n = 0;
	std::cin >> a;
	std::cin >> b;
	
	while (a >= 0) {
		a = a - b;
		n = n + 1;
	}
	std::cout << n - 1 << std::endl;
	return 0;
}