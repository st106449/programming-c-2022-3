#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
void repeat(vector <int>& v,int n)
{
	int s = v.size();
	v.resize(n * s);
	for (int i = 1; i < n ; ++i)
	{
		copy(v.begin(), v.begin() + s, v.begin() + i * s);
	}
}
int main()
{
	vector <int> v{ 1,2,3 };
	repeat(v, 3);
	for (int x : v)
	{
		cout << x << endl;
	}
	return EXIT_SUCCESS;
}