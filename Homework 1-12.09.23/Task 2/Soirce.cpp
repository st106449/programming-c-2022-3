#include <iostream>

class Expression
{
public:
	virtual double evaluate() = 0;
};
class Number : public Expression
{
	double value;
public:
	double evaluate()
	{
		return value;
	}
};
class BinaryOperation : public Expression
{
private: 
	Expression * left;
	Expression * right;
	char op;
public:
	BinaryOperation(Expression * left, char op, Expression * right): left(left), op(op), right(right) {}
	double evaluate()
	{
		if (op == '+')
		{
			return (*left).evaluate() + (*right).evaluate();
		}
		else if (op = '*')
		{
			return (*left).evaluate() * ((*right).evaluate());
		}
		else if (op = '-')
		{
			return (*left).evaluate() - (*right).evaluate();
		}
		return (*left).evaluate() / (*right).evaluate();
	}
	~BinaryOperation()
	{
		delete left;
		delete right;
	}
};