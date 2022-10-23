#include <iostream>;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	while (b >= a)
	{
		std::cout << b << std::endl;
		b -= 1;
	}
	return EXIT_SUCCESS;
}