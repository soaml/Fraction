#include "fraction.h"
using namespace std;
void Fraction::SetFraction()
{
	if (y == 0) {
		throw logic_error("division by 0");
	}
	long a = abs(x), b = abs(y);
	while (a != b) {
		if (a < b) {
			swap(a, b);
		}
		a -= b;
	}
	x /= a;
	y /= b;

	if (x == 0) {
		y = 1;
	}

	if (y < 0) {
		x *= -1;
		y *= -1;
	}
}

Fraction::Fraction()
{
}


/*
Fraction::Fraction(long x, long y)
{
	this->x = x;
	this->y = y;
	SetFraction();
}

Fraction::Fraction(Fraction& f)
{
	this->x = f.x;
	this->y = f.y;
}
*/

Fraction::Fraction(long ax, long ay)
{
	x = ax;
	y = ay;
}

void Fraction::check() {
	if (y == 0) {
		throw logic_error("division by 0");
	}
}

void Fraction::setX(long x) {
	this->x = x;
	SetFraction();
}
void Fraction::setY(long y) {
	this->y = y;
	SetFraction();
}
long Fraction::getX() {
	return x;
}
long Fraction::getY() {
	return y;
}

void Fraction::print() {
	if (y != 1) {
		cout << x << "/" << y;
	}
	else
		cout << x;
}

ostream& operator<<(ostream& out,  Fraction& fraction)
{
	out << fraction.getX() << " / " << fraction.getY();
	return out;
}
istream& operator>>(istream& out, Fraction& fraction)
{
	long x, y;
	out >> x >> y;
	fraction.setX(x);
	fraction.setY(y);
	return out;
}

Fraction operator+(Fraction& a, Fraction& b) {
	int common_denominator = a.getY() * b.getY();
	int common_nominator = a.getX() * b.getY() + b.getX() * a.getY();
	Fraction* fraction = new Fraction(common_nominator, common_denominator);
	return *fraction;
}

Fraction operator-(Fraction& a, Fraction& b) {
	int common_denominator = a.getY() * b.getY();
	int common_nominator = a.getX() * b.getY() - b.getX() * a.getY();
	Fraction* fraction = new Fraction(common_nominator, common_denominator);
	return *fraction;
}

Fraction operator* (Fraction& a, Fraction& b) {	
	Fraction* fraction = new Fraction (a.getX() * b.getX(), a.getY() * b.getY());
	return *fraction;
}

Fraction operator/(Fraction& a, Fraction& b) {
	Fraction* fraction = new Fraction(a.getX() * b.getY(), a.getY() * b.getX());
	return *fraction;
}

Fraction operator+(Fraction& a) {
	Fraction* fraction = new Fraction(a.getX(), a.getY());
	return *fraction;
}

Fraction operator-(Fraction& a) {
	Fraction* fraction = new Fraction(-a.getX(), a.getY());
	return *fraction;
}

Fraction operator +(Fraction& a, long n)
{
	Fraction* fraction = new  Fraction(a.getX() + n * a.getY(), a.getY());
	return *fraction;
}
Fraction operator -(Fraction& a, long n)
{
	Fraction* fraction = new  Fraction(a.getX() - n * a.getY(), a.getY());
	return *fraction;
}

Fraction operator *(Fraction& a, long n)
{
	Fraction* fraction = new  Fraction(a.getX() * n, a.getY());
	return *fraction;
}
Fraction operator /(Fraction& a, long n)
{
	if (n != 0) {
		Fraction* fraction = new  Fraction(a.getX(), a.getY()*n);
		return *fraction;
	}
}

bool operator > (Fraction& a, Fraction& b) {
	return a.getX() * b.getY() > b.getX() * a.getY();
}
bool operator >= (Fraction& a, Fraction& b) {
	return a.getX() * b.getY() >= b.getX() * a.getY();
}
bool operator < (Fraction& a, Fraction& b) {
	return a.getX() * b.getY() < b.getX() * a.getY();
}
bool operator <= (Fraction& a, Fraction& b) {
	return a.getX() * b.getY() <= b.getX() * a.getY();
}
bool operator == (Fraction& a, Fraction& b) {
	return a.getX() == b.getX() && a.getY() == b.getY();
}
bool operator != (Fraction& a, Fraction& b) {
	return a.getX() != b.getX() || a.getY() != b.getY();
}

