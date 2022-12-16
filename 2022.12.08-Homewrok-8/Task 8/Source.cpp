#include <iostream>
#include <cstring>

int len(char s, int dlina)
{
	char a;

	if (std::cin >> a)
	{
		return len(a, dlina + 1);
	}
	else
	{
		return dlina+ 1;
	}
}
int skbc(char s, int it, int lenght)
{
	char a;
	std::cout << s;
	if (std::cin >> a)
	{
		if (it < lenght / 2)
		{
			std::cout << "(";
		}
		else if (it > lenght / 2)
		{
			std::cout << ")";
		}
		skbc(a, it + 1, lenght);
	}
	else
	{
		return 1;
	}
}
int main(int argc, char* argv[])
{
	char s;
	std::cin >> s;
	int dlina = 0;
	int lenght = len(s, 1);
	std::cout << lenght;
	return EXIT_SUCCESS;
}