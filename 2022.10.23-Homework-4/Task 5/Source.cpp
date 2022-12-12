#include <iostream>;

int main(int argc, char* argv[])
{
	double sum = 1;
	int n = 0;
	int div = 1;
	std::cin >> n;
	for (int i = 1; i <= n; i += 1)
	{
		div = div * i;
		sum = sum + 1.0 / div;
	}
	std::cout << sum;
	return EXIT_SUCCESS;
}