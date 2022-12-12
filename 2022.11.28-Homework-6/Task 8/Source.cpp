#include <iostream>;

int main(int argc, char* argv[])
{
	int a[100000] ;
	int n = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	int k = 0;
	std::cin >> k;
	if (k < 0)
	{
		k = -k;
		k = k % n;
	}
	else
	{
		k = k % n;
		k = n - k;
	}
	for (int i = k; i < n; ++i)
	{
		std::cout << a[i] << ' ';
	}
	for (int i = 0; i < k; ++i)
	{
		std::cout << a[i] << ' ';

	}
	return EXIT_SUCCESS;
}