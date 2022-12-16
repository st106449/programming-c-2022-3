#include <iostream>
#include <cstring>

void zvzdc(char s)
{
	char a;
	std::cout << s;
	if (std::cin >> a)
	{
		std::cout << "*";
		zvzdc(a);
	}
	else
	{
		return;
	}
}
int main(int argc, char* argv[])
{
	char s='0';
	std::cin >> s;
	zvzdc(s);
	return EXIT_SUCCESS;
}