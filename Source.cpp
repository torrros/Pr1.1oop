#include "Number.h"
#include <iostream>
using namespace std;

Number makenumber(double x, double y)
{
	Number z;
	if (!z.init(x, y))
		cout << "Wrong arguments to Init!" << endl;
	return z;
}

int main()
{
	Number z;
	z.read();
	z.display();

	cout << "Summa - " << z.multiply() << endl;
	cout << endl;
	double x;
	double y;

	cout << "First number-"; cin >> x;
	cout << endl;
	cout << "Second number-"; cin >> y;
	Number k = makenumber(x, y);
	k.display();
	double result = k.multiply();
	cout << "Summa - " << result << endl;	
	cout << endl;
	cin.get();
	return 0;

}