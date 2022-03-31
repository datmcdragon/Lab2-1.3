#pragma once

#include "string"

using namespace std;

class Complex
{
	double re, im;
public:

	void Display() const;
	string ToString() const;
	void Init(double re, double im);
	void Read();

	void setX(double re);
	void setY(double im);

	int getX() const;
	int getY() const;

	Complex sub(const Complex& r, const Complex& j);
	Complex div(const Complex& r, const Complex& j);
	Complex conj(const Complex& r, const Complex& j);

};
