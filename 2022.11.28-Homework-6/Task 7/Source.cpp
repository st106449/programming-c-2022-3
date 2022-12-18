#include <iostream>;

int main(int argc, char* argv[])
{
	int a[100];
	int n = 0;
	std::cin >> n;
	int sum = 0;
	int prd = 1;
	int max = 0;
	int min = 0;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > 0)
		{
			sum += a[i];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < a[min])
		{
			min = i;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > a[max])
		{
			max = i;
		}
	}
	if (max < min)
	{
		int c = max;
		max = min;
		min = c;
	}
	for (int i = min + 1; i < max; ++i)
	{
		prd *= a[i];
	}
	std::cout << sum << " " << prd;

	return EXIT_SUCCESS;
}