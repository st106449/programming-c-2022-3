#include <iostream>

int abs(int a)
{
	if (a >= 0)
	{
		return a;
	}
	if (a < 0)
	{
		return -1 * a;
	}
}

int mag(int n, int k, int* y, int* x, int p, int amount)
{
	if (k <= p) 
	{
		bool hit = 0;
		int currx = amount;
		for (int i = currx; i < n; ++i)
		{
			for (int m = 1; m < n; ++m)
			{
				for (int b = 0; b < k; ++b)
				{
					hit = 0;
					int x1 = abs((x[b] - i)); //разность координат х
					int y1 = abs((y[b] - m)); //разность координат y
					if (x1 == 0 || y1 == 0 || x1 == y1 || x1 * y1 == 2)
					{
						hit = 1;
						break;
					}
				}
				if (hit == 0 || k != p)
				{
					amount += 1;
					x[amount] = i;
					y[amount] = m;
					return mag(n, k+1, y, x, p, amount);
				}
				else
				{
					return amount;
				}
			}
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int y[10];
	for (int i = 0; i < n; ++i)
	{
		y[i] = i + 1;
	}
	int x[10];
	for (int i = 0; i < n; ++i)
	{
		x[i] = i + 1;
	}
	int k = 1;
	int p = 0;
	std::cin >> p;
	int amount = 1;
	mag(n, k, y, x, p, amount);
	std::cout << amount;
	for (int i = 0; i < n; ++i)
	{
		std::cout << y[i];
	}
	return EXIT_SUCCESS;
}