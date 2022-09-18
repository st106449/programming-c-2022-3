#include <iostream>;

using namespace std;

int main()
{
	// x^4 + x^3 + x^2 + x + 1 = x^2(x^2 +x) + x^2 + x + 1 = (x^2 + 1)(x^2 + x) + 1. a = x^2 - первое умножение. (a + 1)(a + x) + 1 - второе умножение.
	int x, a;
	cin >> x;
	a = pow(x,2);
	cout << (a + 1)*(a + x) + 1 << endl;
	return 0;
}