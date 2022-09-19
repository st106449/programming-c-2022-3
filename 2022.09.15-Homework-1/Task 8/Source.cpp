#include <iostream>;



int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;
	std::cin >> f;
	std::cout << (d * 360 + e * 60 + f) - (a * 360 + b * 60 + c) << std::endl;
	return 0;
}