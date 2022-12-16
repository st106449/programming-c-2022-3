#include <iostream>;

void hanoi(int amount, int a, int b)
{
	if (amount <= 0)
	{
		return;
	}
	int temp = 6 - a - b;
	hanoi(amount - 1, a, temp);
	std::cout << "disk " << amount << " move from " << a << " to " << b << std::endl;
	hanoi(amount - 1, temp, b);
}
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	hanoi(n, 1, 3);
	return EXIT_SUCCESS;
}