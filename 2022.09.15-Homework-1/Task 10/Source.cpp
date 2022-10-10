#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int max = 0;

	std::cin >> a;
	std::cin >> b;

	c = a / b;
	d = b / a;

	max = (a * c + b * d) / (c + d);

	std::cout << max << std::endl;

	return EXIT_SUCCESS;
}