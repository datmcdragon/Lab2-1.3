#include "Complex.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream> 

using namespace std;

void Complex::Display() const
{
	cout << ToString();
}

string Complex::ToString() const
{
	stringstream ss;
	ss << " Re = " << re << endl;
	ss << " Im = " << im << endl;
	return ss.str();
}

void Complex::Init(double x, double y)
{
	setX(x);
	setY(y);
}

void Complex::Read()
{
	cout << "Re = " ; cin >> re;
	cout << "Im = " ; cin >> im;

}

void Complex::setX(double x)
{
	re = x;
}

void Complex::setY(double y)
{
	im = y;
}

int Complex::getX() const
{
	return re;
}

int Complex::getY() const
{
	return im;
}


Complex Complex::sub(const Complex& r, const Complex& j)
{
	Complex k;
	k.Init(r.re - j.re, r.im - j.im);
	return k;
}

Complex Complex::div(const Complex& r, const Complex& j)
{
	Complex k;
	k.Init((r.re * j.re + r.im * j.im) / (j.re * j.re + j.im * j.im),
		(r.re * j.re - r.im * j.im) / (j.re * j.re + j.im * j.im));
	return k;
}

Complex Complex::conj(const Complex& r, const Complex& j)
{
	Complex k;
	k.Init(re, -im);
	return k;
}

