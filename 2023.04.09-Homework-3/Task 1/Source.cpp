#include <iostream>

class Point
{
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {};
	Point(const Point& pt) : x(pt.x), y(pt.y) {};
	~Point() {};
	int sqrDist()
	{
		return (x * x + y * y);
	}
	void PrintInfo()
	{
		std::cout << x << " " << y << std::endl;
	}
};
void shakerSort(int n, Point*& point)
{
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		for (int i = right; i > left; --i)
		{
			if (point[i].sqrDist() < point[i-1].sqrDist())
			{
				Point pt = point[i];
				point[i] = point[i - 1];
				point[i - 1] = pt;
			}
		}
		++left;
		for (int i = left; i < right ; ++i)
		{
			if (point[i].sqrDist() > point[i + 1].sqrDist())
			{
				Point pt = point[i];
				point[i] = point[i + 1];
				point[i + 1] = pt;
			}
		}
		--right;
	}
}

int main(int argc, char* argv[])
{

	int n;
	std::cin >> n;
	Point* point = new Point[n];
	for (int i = 0; i < n; ++i)
	{
		int x;
		int y;
		std::cin >> x >> y;
		point[i] = Point(x, y);
	}
	shakerSort(n, point);

		for (int i = 0; i < n; ++i)
		{
			point[i].PrintInfo();
		}
		return EXIT_SUCCESS;
	}

