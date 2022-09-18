#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, K;
	cin >> N;
	cin >> K;
	cout << K % N << endl;
	return 0;
}
