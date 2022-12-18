#include <iostream>;

int main(int argc, char* argv[])
{
	int a[100000];
	int n = 0;
	int m = 0;
	std::cin >> n;
	std::cin >> m;
	int x = 0;
	int y = 0;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> x;
		a[x] = 1;
	}
	for (int i = 0; i < m; ++i)
	{
		std::cin >> y;
		if (a[y] == 1)
		{
			a[y] = 2;
		}
	}
	if (m > n)
	{
		n = m;
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == 2)
		{
			std::cout << i << ' ';
		}
	}
	return EXIT_SUCCESS;
}
