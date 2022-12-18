#include <iostream>
#include <cstring>

void del(char* s, int n)
{
	if (n == strlen(s))
	{
		return;
	}
	
	if (s[n] == s[strlen(s) - n - 1] && n != strlen(s) - n - 1)
	{
		return del(s, n + 1);
	}
	else
	{
		std::cout << s[n];
		return del(s, n + 1);
	}
}
int main(int argc, char* argv[])
{
	char s[1001];
	std::cin.getline(s, 1001);
	del(s, 0);
	return EXIT_SUCCESS;
}