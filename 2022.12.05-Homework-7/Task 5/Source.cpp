#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int m = 0;
	std::cin >> m;
	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m];
	}
	if (a != nullptr) {
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				std::cin >> a[i][j];
			}
		}
		for (int i = 0; i < (n-1)/2; ++i)
		{
			for (int j = 0; j <= m; ++j)
			{
				int c = a[i][j];
				a[i][j] = a[n-i-1][j];
				a[n-i-1][j] = c;
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				std::cout << a[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}
	delete[] a;
	return EXIT_SUCCESS;
}