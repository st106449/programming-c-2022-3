#include <iostream>;

int main(int argc, char* argvv[])
{
	int a[1000];
	int n = 0;
	int x = 0;
	int k = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	std::cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			++k;
		}
	}
	std::cout << k;
	return EXIT_SUCCESS;
}