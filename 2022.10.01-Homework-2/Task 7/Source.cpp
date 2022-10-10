#include <iostream>;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int k = 0;
	std::cin >> m >> n >> k;
	if (k % m == 0 || k % n == 0)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
	return EXIT_SUCCESS;
}