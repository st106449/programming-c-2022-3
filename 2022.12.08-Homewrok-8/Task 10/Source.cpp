#include <iostream>
#include <cstring>

int kill(int k, int** mess,int n)
{
	int amount = 1;
	for (int i = 0; i < n; ++i)
	{
		{
			if (mess[i][1] == k)
			{
				amount += kill(mess[i][0], mess, n);
			}
		}
	}
	return amount;
}
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int** mess = new int*[2 * n];
	for (int i = 0; i < n; ++i)
	{
		mess[i] = new int[2];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			std::cin >> mess[i][j];
		}
	}
	int k = 0;
	std::cin >> k;
	std::cout << kill(k, mess, n);
	return EXIT_SUCCESS;

}