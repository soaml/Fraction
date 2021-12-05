#pragma once
#include <iostream>
#include <algorithm>
using namespace std;
class Fraction {
private:
	long x = 1, y = 1;
	void SetFraction();

public:

	Fraction();
	Fraction(long x, long y);
	Fraction(Fraction& f);
	void check();
    
	void setX(long x);
	void setY(long y);
	long getX();
	long getY();
	void print();
	
	friend ostream& operator<<(ostream& out, Fraction& fraction);
	friend istream& operator>>(istream& out, Fraction& fraction);
	
	friend Fraction operator+(Fraction& a, Fraction& b);
	friend Fraction operator-(Fraction& a, Fraction& b);
	friend Fraction operator*(Fraction& a, Fraction& b);
	friend Fraction operator/(Fraction& a, Fraction& b);

	friend Fraction operator+(Fraction& a);
	friend Fraction operator-(Fraction& a);

	friend Fraction operator +(Fraction& a, long n);
	friend Fraction operator -(Fraction& a, long n);
	friend Fraction operator *(Fraction& a, long n);
	friend Fraction operator /(Fraction& a, long n);

	friend bool operator== (Fraction& a, Fraction& b);
	friend bool operator> (Fraction& a, Fraction& b);
	friend bool operator>= (Fraction& a, Fraction& b);
	friend bool operator<= (Fraction& a, Fraction& b);
	friend bool operator< (Fraction& a, Fraction& b);
	friend bool operator!= (Fraction& a, Fraction& b);
};
