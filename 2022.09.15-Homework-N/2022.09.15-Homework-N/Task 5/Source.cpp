#include <iostream>;

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, a, b, c;
	cin >> N;
	a = N / 100;
	b = (N - (a * 100)) / 10;
	c = (N - a*100 - b*10);
	cout << a + b + c << endl;
	return 0;
}