#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
void concat(vector <int> & v, vector <int>& u)
{
	int n = v.size();
	v.resize(u.size() +v.size());
	copy(u.begin(), u.end(), v.begin() + n);
}
int main()
{
	vector <int> v{ 1,2,3 };
	vector <int> u{ 4,5,6 };
	concat(v, u);
	for (int x : v)
	{
		cout << x << endl;
	}
	return EXIT_SUCCESS;
}

