#pragma once
#include <iostream>
using namespace std;

class Number
{
private:

	double first;
	double second;

public:
	double multiply();
	bool init(double first, double second);
	void read();
	void display();
	int get_first() { return first; };
	double get_second() { return second; };
	void set_first(double value) { first = value; };
	void set_second(double value) { second = value; };
};

