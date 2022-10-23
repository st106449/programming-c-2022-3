#include <iostream>;

int main(int argc, char* argv[])
{
	int n = 0;
	int n1 = 1;
	int n2 = 1;
	std::cin >> n;
	int a = n;
	do
	{
		n1 = n2;
		while (n1 <= n)
		{
			std::cout << n1 << " ";
			++n1;
		}
		++n;
		++n2;
			std::cout << "" << std::endl;
	} while (n2 <= a);
	return EXIT_SUCCESS;
}