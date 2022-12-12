#include <iostream>;

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int m[1000]	;
	for (int i = 0; i < n; ++i)
	{
		m[i]= i+1;
	}
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a >> b >> c >> d;
	for (int i = 0; i < (b-a)/2; ++i)
	{
		int x = m[a+i-1];
		m[a + i - 1] = m[b - i - 1];
		m[b - i - 1] = x;
	}
	for (int i = 0; i < (d - c) / 2; ++i)
	{
		int l = m[c + i - 1];
		m[c + i - 1] = m[d - i - 1];
		m[d - i - 1] = l;
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << m[i];
	}
	return EXIT_SUCCESS;
}