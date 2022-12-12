#include <iostream>
#include <cstring>

int max(char* s, int n)
{
	if (n == 0)
	{
		return 0;
	}
	for (int i = 0; i < strlen(s)/2 + 1; ++i)
	{   
		if (s[i] == n)
		{
			return n;
			break;
		}
		else
		{
			return max(s, n - 1);
		}
	}
}

int main(int argc, char* argv[])
{
	char s[1000];
	int n = 9;
	std::cin.getline (s, 1000);
	std::cout << max(s, n);
	return EXIT_SUCCESS;
}