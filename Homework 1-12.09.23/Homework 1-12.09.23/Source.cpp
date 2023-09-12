#include <iostream>

class Payment
{
	int adr;
public:
	Payment(int a) : adr(a) {};
	virtual double Total() = 0;
	virtual ~Payment() {};
};
class Heat : public Payment
{
	double area;
public:
	Heat() : Payment(0) { area = 0; }
	Heat(double a, int b) : Payment(b) { area = a; }
	double Total()
	{
		return 10 * area;
	}
};
class Water : public Payment
{
	int people;
public:
	Water() : Payment(0) { people = 0; }
	Water(int a, int b) : Payment(b) { people = a; }
	double Total()
	{
		return 100 * people;
	}
};
class Electricity : public Payment
{
	double kwh;
public:
	Electricity() : Payment(0) { kwh = 0; }
	Electricity(double a, int b) : Payment(b) { kwh = a; }
	double Total()
	{
		return kwh;
	}
};

int main(int argc, char* argv[])
{
	Payment* P[8];
	Heat h1(100, 1);
	P[0] = &h1;
	Heat h2(150.4, 2);
	P[1] = &h2;
	Water w1(5, 3);
	P[2] = &w1;
	Water w2(2, 4);
	P[3] = &w2;
	Water w3(10, 5);
	P[4] = &w3;
	Electricity e1(15, 6);
	P[5] = &e1;
	Electricity e2(70.15, 7);
	P[6] = &e2;
	Electricity e3(105.8, 8);
	P[7] = &e3;
	for (int i = 0; i < 8; ++i)
	{
		std::cout << P[i]->Total() << std::endl;
	}
}