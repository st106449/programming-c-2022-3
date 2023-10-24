#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

vector<int> ::iterator second_occur(vector <int> & v, int n)
{
	vector<int> ::iterator it;
	it = find(v.begin(), v.end(), n);
	if (it == v.end())
	{
		return it;
	}
	vector<int> ::iterator it1;
	it1 = find(it+1, v.end(), n);
	return it1;
}
int main()
{
	vector <int> v{ 3, 2, 5, 9, 4, 5, 7 };
	cout << distance(v.begin(), second_occur(v, 5));
	return EXIT_SUCCESS;

}
