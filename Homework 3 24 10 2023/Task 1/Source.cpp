#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
	vector <int> v{ 1,2,3,4,5};
	int n[5];
	copy(v.begin(), v.end(), n);
	for (int i= 0; i < 5; ++i)
	{
		cout << n[i] << endl;
	}
	return EXIT_SUCCESS;
}