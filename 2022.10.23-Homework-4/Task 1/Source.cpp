#include <iostream>;

int main(int argc, char* argv[])
{
	int x = 1;
	int n = 0;
	std::cin >> x;
	for (int i = x; i <= x && i>0; i--)
	{
		if (x % i == 0)
		{
			++n;
		}
		
	}
	std::cout << n;
	return EXIT_SUCCESS;
}