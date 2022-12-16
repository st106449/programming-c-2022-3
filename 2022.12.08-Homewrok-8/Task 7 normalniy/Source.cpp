#include <iostream>
#include <cstring>

int global_max=-1;

void zvzdc(char* s, int n)
{
	if (s[n+1])
	{
		std::cout << s[n] << "*";
		zvzdc(s, n + 1);
	}
	else 
	{
		std::cout << s[n];
	}

}
int main(int argc, char* argv[])
{
	char s[1001];
	std::cin.getline(s, 1001);
	zvzdc(s, 0);
	
	return EXIT_SUCCESS;
}