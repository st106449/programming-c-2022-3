#include <iostream>;



int main()
{
	setlocale(LC_ALL, "Russian");
	int N = 0;
	int	a = 0;
	int b = 0;
	int c = 0;
	std::cin >> N;
	a = N / 100;
	b = (N - (a * 100)) / 10;
	c = (N - a * 100 - b * 10);
	std::cout << a + b + c << std::endl;
	return 0;
}