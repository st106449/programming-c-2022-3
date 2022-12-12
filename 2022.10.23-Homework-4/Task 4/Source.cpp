#include <iostream>;

int main(int argc, char* argv[])
{
	int n = 1;
	std::cin >> n;
	int l1 = 1;
	int l = 1;
	for (int i = 1; l1 <= n; i += 1)
	{
		for (l = l; l <= i; l += 1)
		{
			std::cout << i << ", ";
			++l1;
		}
		l = 1;
	}
	return EXIT_SUCCESS;
}