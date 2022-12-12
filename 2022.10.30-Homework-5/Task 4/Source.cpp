#include <iostream>;

int main(int argc, char* argv[])
{
	int a[1000];
	int n = 0;
	std::cin >> n;
	int max = 0;
	for (int i = 0; i <n; ++i)
	{
		std::cin >> a[i];
	}
	for (int i = 2; i <= n; ++i)
	{
		if (i + 1 == n)
		{
			a[i+1] = a[0];
		}
		if (i = n)
		{
			a[i] = a[0];
			a[i + 1] = a[1];
		}
		if (a[i - 2] + a[i - 1] + a[i] >= a[i - 1] + a[i] + a[i + 1])
		{
			max = a[i - 2] + a[i - 1] + a[i];
		}
	}
	std::cout << max;
	return EXIT_SUCCESS;
}