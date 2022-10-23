#include <iostream>;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int n1 = 1;
	int n2 = 1;
	int s = 0;
	std::cin >> n;
	do
	{
		n1 = n2;
		while (n1 <= n)
		{
			if (n1 < n)
			{
				std::cout << n1 << " ";
				++s;
				n1 = n1 + s;
			}
			else
			{
				do
				{
					std::cout << n1 << " ";
					++m;
					n1 = n1 - m;
				} while (s + m < n - 1);
				std::cout << std::endl;
				goto cont;
				
			}
			
		} cont:
		++n2;
		m = 0;
		s = 0;
	} while (n2 <= n);
		return EXIT_SUCCESS;
}