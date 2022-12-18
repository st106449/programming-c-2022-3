#include <iostream>;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int k = 0;
	std::cin >> n >> m >> k;
	if (k <= n * m)
	{
		if (k % m == 0 || k % n == 0)
		{
			std::cout << "YES" << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;
		}
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}