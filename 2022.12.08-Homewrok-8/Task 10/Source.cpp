#include <iostream>
#include <cstring>

int syn(int k, int* a, int* b)
{
	
}
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* parent = (int*)malloc(sizeof(int)*n);
	int* child = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> child[i];
		std::cin >> parent[i];
	}
	int k = 0;
	std::cin >> k;

}