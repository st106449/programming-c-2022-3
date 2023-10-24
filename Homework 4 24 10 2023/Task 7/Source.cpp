#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

vector<int> ::iterator last_occur(vector <int>& v, int n, vector<int> ::iterator i, int acc = 0)
{
	vector<int> ::iterator it = find(i, v.end(), n);
	if (it == v.end())
	{
		if (acc == 0)
		{
			return it;
		}
		else
		{
			return i;
		}
	}
	return last_occur(v, n, it+1, acc + 1);
}
int main()
{
	vector <int> v{ 3, 2, 5, 9, 4, 5, 7, 1, 5, 8 };
	cout << distance(v.begin(), last_occur(v, 5, v.begin()));
	return EXIT_SUCCESS;
}