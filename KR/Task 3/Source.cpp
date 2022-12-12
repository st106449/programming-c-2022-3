#include <iostream>

bool prime(int n, int i)
{
	if (i > sqrt(n))
	{
		return 1;
	}
	if (n % i == 0)
	{
		return 0;
	}
	else
	{
		return prime(n, i + 1);
	}
}
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	if (prime(n, 2))
	{
		std::cout << "prime";
	}
	else
	{
		std::cout << "composite";
	}
	return EXIT_SUCCESS;
}