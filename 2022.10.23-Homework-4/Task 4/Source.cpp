#include <iostream>;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int n = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;
	for (int x = 0; x <= 1000; x++)
	{
		if (x != e)
		{
			n = n;
		}
		else if (a * x * x * x + b * x * x + c * x + d == 0)
		{
			++n;
		}
		else
		{
			n = n;
		}
	}
	std::cout << n;
	return EXIT_SUCCESS;
}