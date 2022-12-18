#include <iostream>;

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a[100];
	int b = 0;
	int c = 0;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			b += 4;
		}
		else
		{
			c += 3;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			std::cout << a[i] << " ";
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 1)
		{
			std::cout << a[i] << " ";
		}
	}
	std::cout << std::endl;
	if (c / 3 <= b / 4)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}