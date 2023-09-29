#include <iostream>
#include <sstream>
#include <fstream>


void  func(std::string f, std::string g)
{
	std::ifstream F(f);
	std::string s;
	std::stringstream st;
	int i = 1;

	while (getline(F,s))
	{
		st << i;
		std::string S;
		st >> S;
		std::ofstream G(g + S + ".txt");
		std::string temp;
		G << s;
		++i;
		G.close();
	}
	F.close();
}

int main()
{
	std::string f = "f.txt";
	std::string g = "g";
	func("f.txt", g);
	return EXIT_SUCCESS;
}
