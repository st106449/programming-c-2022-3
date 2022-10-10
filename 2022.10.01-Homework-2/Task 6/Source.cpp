#include <iostream>;

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	std::cin >> x1 >> y1 >> x2 >> y2;
	if (abs(x1 - x2) == abs(y1 - y2))
	{
		std::cout << "yes" << std::endl;
	}
	else
	{
		std::cout << "no" << std::endl;
	}
	return EXIT_SUCCESS;
}