#include <iostream>;

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	if (n % 4 == 0) {
		if (n % 400 == 0) 
		{
			std::cout << "YES";
		}
		else if (n % 100 == 0)
		{
			std::cout << "NO";
		}
		else 
		{
			std::cout << "YES";
		}
	}
	return EXIT_SUCCESS;
}