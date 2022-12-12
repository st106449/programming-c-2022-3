#include <iostream>

void raz(int n, int* a, int it)
{
	if (it == (n) / 2)
	{
		
		if (n % 2 == 0)
		{
			int c = a[it];
			a[it] = a[it + 1];
			a[it + 1] = c;
		}
		else if (n % 2 == 1)
		{
			a[it] = a[it];
		}
	}
	else 
	{
		int b = a[it];
		a[it] = a[n - 1 - it];
		a[n - 1 - it] = b;
		return raz(n, a, it + 1);
	}
}
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	raz(n, a, 0);
	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}
	return EXIT_SUCCESS;
}