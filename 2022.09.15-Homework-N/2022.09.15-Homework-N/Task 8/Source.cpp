#include <iostream>;

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	cout << (d * 360 + e * 60 + f) - (a * 360 + b * 60 + c) << endl;
	return 0;
}