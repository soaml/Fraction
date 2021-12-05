#include <iostream>
#include "fraction.h"
using namespace std;
int main()
{
	Fraction fraction1;
	Fraction fraction2;
	cout << "enter first fraction: ";
	cin >> fraction1;
	cout << "enter second fraction: ";
	cin >> fraction1;
	long n;
	cout << "enter factor number: ";
	cin >> n;

	try {
		fraction1.check();
	}
	catch (...) {
		cout << "error";
		return 1;
	}

	try {
		fraction2.check();
	}
	catch (...) {
		cout << "error";
		return 1;
	}
	cout << fraction1 << " + " << fraction2 << " = ";
	(fraction1 + fraction2).print();
	cout << endl;

	cout << fraction1 << " - " << fraction2 << " = ";
	(fraction1 - fraction2).print();
	cout << endl;

	cout << fraction1 << " * " << fraction2 << " = ";
	(fraction1 * fraction2).print();
	cout << endl;

	cout << fraction1 << " / " << fraction2 << " = ";
	(fraction1 / fraction2).print();
	cout << endl;

	cout << " + " << fraction1 << " = ";
	(+fraction1).print();
	cout << endl;

	cout << " - " << fraction1 << " = ";
	(-fraction1).print();
	cout << endl;

	cout << fraction1 << " + " << n << " = ";
	(fraction1 + n).print();
	cout << endl;

	cout << fraction1 << " - " << n << " = ";
	(fraction1 - n).print();
	cout << endl;

	cout << fraction1 << " * " << n << " = ";
	(fraction1 * n).print();
	cout << endl;

	cout << fraction1 << " / " << n << " = ";
	(fraction1 / n).print();
	cout << endl;

	cout << fraction1 << " > " << fraction2 << " = " << (fraction1 > fraction2) << endl;
	cout << fraction1 << " >= " << fraction2 << " = " << (fraction1 >= fraction2) << endl;
	cout << fraction1 << " < " << fraction2 << " = " << (fraction1 < fraction2) << endl;
	cout << fraction1 << " <= " << fraction2 << " = " << (fraction1 <= fraction2) << endl;
	cout << fraction1 << " == " << fraction2 << " = " << (fraction1 == fraction2) << endl;
	cout << fraction1 << " != " << fraction2 << " = " << (fraction1 != fraction2) << endl;
}

