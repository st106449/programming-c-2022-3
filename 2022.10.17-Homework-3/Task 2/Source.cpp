#include <iostream>;

int main(int argc, char* argv[])
{
	int x = 1;
	int n = 0;
	while (x != 0)
	{
		std::cin >> x;
		if (x % 2 == -1)
		{
			n += 1;
		}
	}
	std::cout << n << std::endl;
	return EXIT_SUCCESS;
}