#include <iostream>;

int main(int argc, char* argv[])
{
	int a[1000];
	int n = 0;
	int l = 0;
	int r = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	std::cin >> l >> r;
	int max = 0;
	int indMax = 0;
	for (int i = l; i < r; ++i)
	{
		(a[i] <= a[i + 1] ? indMax = i + 1 : indMax = i);
	}
	max = a[indMax];
	std::cout << max << " " << (indMax + 1);
	return EXIT_SUCCESS;
}