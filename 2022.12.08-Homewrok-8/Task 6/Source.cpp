#include <iostream>
#include <cstring>

char strmax(char* s, int n,char max)
{
	if (s[n])
	{
		if (s[n] >= max)
		{
			max = s[n];
		}
		return strmax(s, n + 1, max);
	}
	else
	{
		return max;
	}
}

int main(int argc, char* argv[])
{
	char s[1000];
	int n = 0;
	char max = 0;
	std::cin.getline (s, 1000);
	std::cout << strmax(s, n,max);
	return EXIT_SUCCESS;
}