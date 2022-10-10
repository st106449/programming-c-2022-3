#include <iostream>;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int x = 0;
	int y = 0;
	std::cin >> m >> n >> x >> y;
	if (x == 1)
	{
		if (y == 1)
		{
			std::cout << x + 1 << " " << y + 1 << std::endl;
		}
		else if (y == n)
		{
			std::cout << x + 1 << " " << y - 1 << std::endl;
		}
		else
		{
			std::cout << x + 1 << " " << y - 1 << " " << y + 1 << std::endl;
		}
	}
	else if (y == 1)
	{
		if (x == m)
		{
			std::cout << x - 1 << " " << y + 1 << std::endl;
		}
		else
		{
			std::cout << x + 1 << " " << x - 1 << " " << y + 1 << std::endl;
		}
	}
	else if (x == m)
	{
		if (y == n)
		{
			std::cout << x - 1 << " " << y - 1 << std::endl;
		}
		else
		{
			std::cout << x - 1 << " " << y + 1 << " " << y - 1 << std::endl;
		}
	}
	else if (y == n)
	{
		std::cout << x + 1 << " " << x - 1 << " " << y - 1 << std::endl;
	}
	else
	{
		std::cout << x + 1 << " " << x - 1 << " " << y + 1 << " " << y - 1 << std::endl;
	}
	return EXIT_SUCCESS;
}