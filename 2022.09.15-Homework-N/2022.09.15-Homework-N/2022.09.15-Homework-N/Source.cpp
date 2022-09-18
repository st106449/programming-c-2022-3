#include <iostream>;

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");


int a;
cout << "¬ведите число меньше 10000:"<< endl;
cin >> a;

cout << "The next number for the number " << a << " is " << a + 1 << "." << endl;
cout << "The previous number for the number " << a << " is " << a - 1 << "." << endl;
		

return 0;

}