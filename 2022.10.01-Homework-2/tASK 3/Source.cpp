#include <iostream>;

int main(int argc, char* argv[]) {
	int n = 0;
	int k = 1;
	int m = 0;
	std::cin >> n >> k >> m;
	if (n % k == 0)
	{
		std::cout << (n / k) * m * 2 << std::endl;
	}
	else
	{
		std::cout << (n / k + 1) * m * 2 << std::endl;
	}

	return 0;
}