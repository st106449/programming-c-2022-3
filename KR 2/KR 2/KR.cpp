#include <iostream>
#include <cmath>

class complex {
private:
	double re;
	double im;
public:
	complex(double re = 0, double im = 0) : re(re), im(im) {}
	complex(const complex& comp) : re(comp.re), im(comp.im) {}
	~complex() {}
	complex Conj()
	{
		return complex(re, -im);
	}
	double Abs()
	{
		return sqrt(re * re + im * im);
	}
	double arg()
	{
		return asin(re / Abs());
	}
	complex operator+(double d)
	{
		return complex(re + d, im);
	}
	complex operator-(double d)
	{
		return complex(re - d, im);
	}
	complex operator/(double d)
	{
		return complex(re / d, im / d);
	}
	complex operator*(double d)
	{
		return complex(re * d, im * d);
	}
	friend complex operator+(double d, complex c)
	{
		return c + d;
	}
	friend complex operator-(double d, complex c)
	{
		return complex(d - c.re, -c.im);
	}
	friend complex operator*(double d, complex c)
	{
		return c * d;
	}
	friend complex operator/(double d, complex c)
	{
		return complex(d, 0) / c;
	}
	complex operator+(complex c)
	{
		return complex(re + c.re, im + c.im);
	}
	complex operator-(complex c)
	{
		return complex(re - c.re, im - c.im);
	}
	complex operator*(complex c)
	{
		return complex(re * c.re - im * c.im, re * c.im + im * c.re);
	}
	complex operator/(complex c)
	{
		return complex((re * c.re - im * c.Conj().im) / (c.Abs() * c.Abs()), (re * c.Conj().im + im * c.re) / (c.Abs() * c.Abs()));
	}
	complex operator =(complex c)
	{
		return complex(c.re, c.im);
	}
	friend std::ostream& operator<<(std::ostream& stream, const complex& c)
	{
		stream << c.re << " + " << c.im << "i" << std::endl;
		return stream;
	}
};

int main(int argc, char* argv[])
{
	srand(time(0));
	double a;
	a = rand() % 100;
	double b;
	b = rand() % 100;
	double c;
	c = rand() % 100;
	double d;
	d = rand() % 100;
	double f;
	f = rand() % 100;
	complex c1(a, b);
	complex c2(c, d);
	std::cout << c1;
	std::cout << c2;
	std::cout << f << std::endl;
	std::cout << c1 + f;
	std::cout << f + c1;
	std::cout << c1 - f;
	std::cout << f - c1;
	std::cout << c1 * f;
	std::cout << f * c1;
	std::cout << f / c1;
	std::cout << c1 / f;
	std::cout << c1 + c2;
	std::cout << c1 - c2;
	std::cout << c1 * c2;
	std::cout << c1 / c2;
	return EXIT_SUCCESS;
}