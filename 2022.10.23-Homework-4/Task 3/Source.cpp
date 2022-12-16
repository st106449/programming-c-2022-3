#include <iostream>;

int main(int argc, char* argv[])
{
	int n = 1;
	std::cin >> n;
	int l1 = 0;
	int l = 1;
	for (int i = 1; l1 <= n; ++i)
	{
		for (int l = 1; l <= i; ++l)
		{
			std::cout << i << " ";
			++l1;
			if (l1 == n)
			{
				l = i + 1;
				l1 = n + 1;
			}
			
		}

	}
	return EXIT_SUCCESS;
}