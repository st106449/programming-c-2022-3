#include <iostream>
#include <sstream>
#include <fstream>

void func()
{
	std::ifstream F("f.txt");
	std::ofstream G("g.txt");
	std::string h;
	int n = 0;
	while (getline(F, h))
	{
		std::stringstream st(h);
		st << h;
		int sum = 0;
		while (st >> n)
		{
			sum += n;
		}
		G << sum << std::endl;
	}
}

int main()
{
	func();
	return EXIT_SUCCESS;
}