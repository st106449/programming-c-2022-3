#include <iostream>

bool fun(int n)
{
	if (n == 1)
	{
		return true;
	}
	if (n < 1)
	{
		return false;
	}
	else
	{
		return (fun(n - 5) || fun(n - 3));
	}
}
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	if (fun(n))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}