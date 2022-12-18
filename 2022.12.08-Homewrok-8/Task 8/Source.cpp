#include <iostream>
#include <cstring>

void skbc(char* s, int n)
{
	if (n == strlen (s))
	{
		return;

	}
		if (n < strlen(s) / 2 - 1 || (n < strlen(s) / 2) && strlen(s) % 2 == 1)
		{
			std::cout << s[n] << "(";
		}
		else if (n > strlen(s)/2)
		{
			std::cout << ")" << s[n];
		}
		else
		{
			std::cout << s[n];
		}
		skbc(s, n + 1);
}
int main(int argc, char* argv[])
{
	char s[1001];
	std::cin.getline(s, 1001);
	skbc(s, 0);
	return EXIT_SUCCESS;
}