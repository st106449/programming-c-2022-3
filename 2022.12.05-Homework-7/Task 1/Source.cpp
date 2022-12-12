#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int m = 0;
	std::cin >> m;
	int* a = (int*)malloc(sizeof(int) * (n * m));
	int sum1 = 0;
	int sum2 = 0;
	int s = m;
	s = m;
	if (a != nullptr)
	{
		for (int i = 0; i < n * m; ++i)
		{
			std::cin >> a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			for (int k = s - m; k < s; ++k)
			{
				sum1 += a[k];
			}
			std::cout << sum1 << " ";
			s += m;
			sum1 = 0;
		}
		std::cout << std::endl;
		for (int i = 0; i < m; ++i)
		{
			for (int k = 0; k < n; ++k)
			{
				sum2 += a[i + k * m];
			}
			std::cout << sum2 << " ";
			sum2 = 0;
		}
		std::cout << std::endl;
		std::cout << std::endl;
		for (int i = 0; i < n * m; ++i)
		{
			if (i % m != m - 1)
			{
				std::cout << a[i] << ' ';
			}
			else
			{
				std::cout << a[i] << ' ';
				std::cout << std::endl;
			}
		}
	}
	delete[] a;
	return EXIT_SUCCESS;
}