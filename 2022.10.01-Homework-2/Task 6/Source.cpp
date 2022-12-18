#include <iostream>;

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	int dx = 0;
	int dy = 0;
	std::cin >> x1 >> y1 >> x2 >> y2;
	(x1 > x2 ? dx = x1 - x2 : dx = x2 - x1);
	(y1 > y2 ? dy = y1 - y2 : dy = y2 - y1);
	if (x1 == x2 || y1 == y2 || dx == dy)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}