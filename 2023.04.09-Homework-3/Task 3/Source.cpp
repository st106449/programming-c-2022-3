#include <iostream>
#include <string>
enum type
{
	none = 0,
	circle = 1,
	triangle = 2,
	rectangle = 3,
	square = 4
};
class Shape
{
public:
	type Shapetype;
	Shape(type Shapetype = none) : Shapetype(Shapetype) {}
	Shape(const Shape& shape) : Shapetype(shape.Shapetype) {}
	~Shape() {}
};
class Shapecircle : public Shape
{
public:
	int radius;
	Shapecircle(type Shapetype = circle, int radius = 0) : radius(radius) {}
	~Shapecircle() {}
	double Area()
	{
		return 3.14 * radius * radius;
	}
};
class Shapetriangle :public Shape
{
public:
	int a;
	int b;
	int c;
	int p = (a + b + c) / 2;
	Shapetriangle(type Shapetype = triangle, int a = 0, int b = 0, int c = 1) : a(a), b(b), c(c) {}
	~Shapetriangle() {}
	double Area()
	{
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
};
class Shaperect :public Shape
{
public:
	int a;
	int b;
	Shaperect(type Shapetype = rectangle, int a = 0, int b = 0) : a(a), b(b) {}
	~Shaperect() {}
	int Area()
	{
		return a * b;
	}
};
class Shapesquare : public Shaperect
{
public:
	int a;
	Shapesquare(type Shapetype = square, int a = 0) : a(a) {}
	int Area()
	{
		return a * a;
	}
};

int main(int argc, char* argv[])
{
	std::cout << "1 = circle" << "\n" << "2 = triangle" << "\n" << "3 = rectangle" << "\n" << "4 = square" << "\n" << "\n";
	int n;
	std::cin >> n;
	switch (n)
	{
	case 1:
	{
		int r;
		std::cin >> r;
		Shapecircle circle(type(n), r);
		std::cout << "Area = " << circle.Area();
		break;
	}
	case 2:
	{
		int a;
		int b;
		int c;
		std::cin >> a >> b >> c;
		Shapetriangle triangle(type(2), a, b, c);
		std::cout << "Area = " << triangle.Area();
		break;
	}
	case 3:
	{
		int a;
		int b;
		std::cin >> a >> b;
		Shaperect rect(type(3), a, b);
		std::cout << "Area = " << rect.Area();
		break;
	}
	case 4:
	{
		int a;
		std::cin >> a;
		Shapesquare square(type(4), a);
		std::cout << "Area = " << square.Area();
		break;
	}
	}
	return EXIT_SUCCESS;
}