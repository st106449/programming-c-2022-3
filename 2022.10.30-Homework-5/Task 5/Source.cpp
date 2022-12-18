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
	int x = 0;
	std::cin >> x;
	int c1 = 0;
	int c2 = 0;
	int f = 0;
	int d = 0;
	int fin = 0;
	for (int i = 0; i < n; ++i)
	{
		if (x == a[i])
		{
			f = a[i];
			break;
		}
		if (x > a[i])
		{
			if (c1 > x - a[i])
			{
				c1 = x - a[i];
				f = a[i];
			}
		}
		else if (x < a[i]);
		{
			if (c2 > a[i] - x)
			{
				c2 = a[i] - x;
				d = a[i];
			}
		}
	}
	(c1 <= c2 ? fin = f : fin = d);
	std::cout << fin;
	return EXIT_SUCCESS;

}