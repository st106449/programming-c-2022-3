#include <iostream>;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;
	if (a > b + c || b > a + c || c > a + b)
	{
		std::cout << "impossible" << std::endl;
	}
	else if (c >= a && c >= b)
	{
		if (a * a + b * b == c * c)
		{
			std::cout << "right" << std::endl;
		}
		else if (a * a + b * b > c * c)
		{
			std::cout << "acute" << std::endl;
		}
		else if (a * a + b * b < c * c)
		{
			std::cout << "obtuse" << std::endl;
		}
	}
	else if (a >= c && a >= b)
	{
		if (c * c + b * b == a * a)
		{
			std::cout << "right" << std::endl;
		}
		else if (c * c + b * b > a * a)
		{
			std::cout << "acute" << std::endl;
		}
		else if (c * c + b * b < a * a)
		{
			std::cout << "obtuse" << std::endl;
		}
	}
			else if (b >= a && b >= c)
			{
				if (a * a + c * c == b * b)
				{
					std::cout << "right" << std::endl;
				}
				else if (a * a + c * c > b * b)
				{
					std::cout << "acute" << std::endl;
				}
				else if (a * a + c * c < b * b)
				{
					std::cout << "obtuse" << std::endl;
				}
			}
			return EXIT_SUCCESS;
}