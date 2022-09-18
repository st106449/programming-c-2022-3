#include <iostream>;

using namespace std;

int main()
{
	int a, b, n;
	cin >> a;
	cin >> b;
	n = 0;
	while (a >= 0) {
		a = a - b;
		n = n + 1;
	}
	cout << n - 1 << endl;
	return 0;
}