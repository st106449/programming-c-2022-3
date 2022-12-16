#include <iostream>


int spiral(int** a, int n, int i, int x, int y, int moveright, int moveup)
{
	if (i == n * n + 1)
	{
		return 1;
	}
	
	else {
		if (x + moveup < n&& y + moveright < n&& a[x + moveup][y + moveright] == 0)
		{
			x += moveup;
			y += moveright;

			a[x][y] = i;
			return spiral(a, n, i + 1, x, y, moveright, moveup);

		}
		else
		{
		if (moveright == 1)
		{
			moveright = 0;
			moveup = 1;
		}
		else if (moveup == 1)
		{
			moveup = 0;
			moveright = -1;
		}
		else if (moveright == -1)
		{
			moveright = 0;
			moveup = -1;
		}
		else if (moveup == -1)
		{
			moveright = 1;
			moveup = 0;
		}
		}
		return spiral(a, n, i, x, y, moveright, moveup);
	}
	
	}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	
	int** a = (int**)(malloc(sizeof(int*)*n*n));
	for (int i = 0; i < n; ++i)
	{
		a[i] = (int*)malloc(sizeof(int) * n);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int k = 0; k < n; ++k)
		{
			a[i][k] = 0;
		}
	}
	
	int i = 1;
	int x = 0;
	int y = -1;
	int moveright = 1;
	int moveup = 0;
	spiral(a, n, i, x, y, moveright, moveup);
	for (int i = 0; i < n; ++i)
	{
		for (int k = 0; k < n; ++k)
		{
			std::cout << a[i][k] << " ";
		}
		std::cout << std::endl;
	}
	return EXIT_SUCCESS;
}