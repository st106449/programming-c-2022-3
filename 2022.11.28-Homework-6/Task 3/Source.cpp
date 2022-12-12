#include <iostream>;

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a[100];
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	int x = 0;
	std::cin >> x;
	int num = 0;
	for (int i = 0; i < n; ++i)
	{
		if (x > a[0])
		{
			num = 1;
			break;
		}
		else if (x < a[n])
		{
			num = n + 1;
			break;
		}
		if (x <= a[i] && x > a[i + 1])
		{
			num = i + 2;
		}
	}
	std::cout << num;
	return EXIT_SUCCESS;
}