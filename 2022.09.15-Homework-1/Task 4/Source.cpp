#include <iostream>;

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	int s = 0;
	std::cin >> v;
	std::cin >> t;
	s = (109 + (v * t % 109)) % 109;
	std::cout << s << std::endl;
	return EXIT_SUCCESS;
}