#include <iostream>;

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;;
	//n= 4a - 4, a = (n+4)/4. a - сторона доски. ƒоска существует, если n делитс€ на 4.
	if (n%4 == 0)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
	return EXIT_SUCCESS;
}