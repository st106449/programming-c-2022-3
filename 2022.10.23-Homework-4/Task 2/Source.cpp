#include <iostream>;

int main(int argc, char* argv[])
{
	int x = 0;
	std::cin >> x;
	int n = 0;
	int i = 1000000000;
	while (i > x)
	{
		i = i / 10;
	}
	for (i = i; i != 0; i /= 10)
	{
		if (x / i == 1)
		{
			n = 2 * n + 1;
		}
		else
		{
			n = 2 * n;
		}
		x = x - i;
	}
	std::cout << n;
	return EXIT_SUCCESS;
}
  