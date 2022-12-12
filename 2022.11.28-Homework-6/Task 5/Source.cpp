#include <iostream>;

int main(int argc, char* argv[])
{
	int a[100000];
	int n = 0;
	std::cin >> n;
	int min = 0;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[min] > a[i])
		{
			min = i;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << a[(min + i)%n] << " ";
	}
	return EXIT_SUCCESS;
}