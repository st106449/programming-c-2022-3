#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	std::cin >> n >> m;
	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m];
	}
	int** b = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		b[i] = new int[m];
	}
	int** c= new int* [n];
	for (int i = 0; i < n; ++i)
	{
		c[i] = new int[m];
	}
	if (a && b != nullptr)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				std::cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				std::cin >> b[i][j];
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				c[i][j] = a[i][j] + b[i][j];
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << c[i][j] << " ";
		}
		std::cout << std::endl;
	}
	delete[](a, b, c);
	return EXIT_SUCCESS;
}