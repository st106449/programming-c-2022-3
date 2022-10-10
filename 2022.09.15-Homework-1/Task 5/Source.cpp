#include <iostream>;

int main(int argc, char* argv[])
{

	int n = 0;
	int	a = 0;
	int b = 0;
	int c = 0;
	std::cin >> n;
	a = n / 100;
	b = (n % 100) / 10;
	c = (n - a * 100 - b * 10);
	std::cout << a + b + c << std::endl;
	return EXIT_SUCCESS;
}