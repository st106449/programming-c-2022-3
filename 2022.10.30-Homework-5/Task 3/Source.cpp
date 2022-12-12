#include <iostream>

int main(int argc, char* argv[])
{
	int a[1000];
	int n = 0;
	int max = 0;
	int min = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	(a[0] <= a[1] ? min = a[0] : min = a[1]);
	(a[0] >= a[1] ? max = a[0] : max = a[1]);
	for (int i = 2; i < n; ++i)
	{
		(a[i] <= min ? min = a[i] : min = min);
		(a[i] >= max ? max = a[i] : max = max);
	}
	for (int i = 0; i < n; ++i)
	{
		(a[i] == max ? a[i] = min : a[i] = a[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}
	return EXIT_SUCCESS;
}