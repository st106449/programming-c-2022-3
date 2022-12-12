#include <iostream>;

int main(int argc, char* argv[])
{
	int n = 1;
	std::cin >> n;
	int a[100];
	int cash = 0;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	int l = 0;
	int indMax = 0;
	int i = 0;
	while (i < n)
	{
		for (int k = i; k < n; ++k)
		{
			if (a[indMax] < a[k])
			{
				indMax = k;
			}
		}
		l = i - indMax + 1;
		cash += l * a[indMax];	
		i = indMax + 1;
		indMax += 1;
	}
	std::cout << cash;
	return EXIT_SUCCESS;
}