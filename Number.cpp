#include "Number.h"

double Number::multiply()
{
	return first * second;
}

void Number::read()
{
	double x;
	double y;

	do
	{
		cout << "First number - ";
		cin >> x;
		cout << "Second number - ";
		cin >> y;
	} while (!init(x, y));
}

void Number::display()
{
	cout << endl;
	cout << "First number - " << get_first() << endl;

	cout << "Second number - " << get_second() << endl;
	cout << endl;
}

bool Number::init(double first, double second)
{
	if (first > 0 && second > 0)
	{
		set_first(first);
		set_second(second);
		return true;
	}
	else
		return false;
}