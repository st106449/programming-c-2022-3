#include <iostream>;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 1;
	int m = 0;
	std::cin >> k >> m >> n;
	if (n <= k)
	{
		std::cout << 2 * m;
	}
	else if (n * 2 % k == 0)
	{
		std::cout << m * (n * 2 / k);
	}
	else
	{
		std::cout << m * (n * 2 / k + 1);
	}
	return EXIT_SUCCESS;
}