#include <iostream>;

int main(int argc, char* argv[])
{
	int a[1000];
	int n = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	int m = 0;
	std::cin >> m;
	for (int k = 0; k < m; ++k)
	{
		int i = 0;
		int j = 0;
		std::cin >> i;
		std::cin >> j;
		for (int s = i -1; s <= j-1; ++s)
		{
			std::cout << a[s] << " ";
		}
		std::cout << std::endl;
	}
	return EXIT_SUCCESS;
}