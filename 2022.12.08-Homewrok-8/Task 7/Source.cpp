#include <iostream>
#include <cstring>

void zvzdc(char s)
{
	char a;
	std::cin >> a;
	if (a != '\n')
	{
		std::cout << a << "*";
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
	zvzdc(s);
	return EXIT_SUCCESS;
}