#include <iostream>;

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int S, v, t;
	
	cin >> v;
	cin >> t;
	S = v * t - 109 * ((v * t) / 109);
	if (v * t > 0)
	{
		cout << v * t - 109 * ((v * t) / 109) << endl;
	}
	else {
		cout << 109 + v * t + 109 * (abs(v) * t / 109) << endl;
	}
	return 0;
}