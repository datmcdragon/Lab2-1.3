#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex z, z1;
	z.Read();
	z1.Read();
	z.sub(z,z1).Display();
	z.div(z,z1).Display();
	z.conj(z,z1).Display();
	//xuita

	return 0;
}