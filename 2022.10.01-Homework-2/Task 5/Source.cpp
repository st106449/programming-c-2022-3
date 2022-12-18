#include <iostream>;

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;;
	//n= 4a - 4, a = (n+4)/4. a - сторона доски. ƒоска существует, если n делитс€ на 4.
	if (n == 1)
	{
		std::cout << "YES";
	}
	else if (n % 4 == 0)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}