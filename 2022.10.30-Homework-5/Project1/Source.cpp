#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int v[100];
	int p[100];
	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> v[i];
	}
	for (int i = 0; i < n; ++i)
	{
		std::cin >> p[i];
	}
	double per[100];
	for (int i = 0; i < n; ++i)
	{
		per[i] = 0.01 * p[i];
	}
	max = per[0] * v[0];
	int num = 0;
	for (int i = 0; i < n; ++i)
	{
		if (per[i] * v[i] > max)
		{
			max = per[i] * v[i];
			num = i;
		}
	}
	std::cout << num + 1;
	return EXIT_SUCCESS;
}