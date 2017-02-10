#include <iostream>
#include "punct.h"
using namespace std;
punct::punct(int abs, int ord, long c)
{
	x = abs;
	y = ord;
	col = c;
}
void punct::afisez()
{
	cout << "x= " << x << ", y= " << y << endl;
	cout << "culoarea = " << col << endl;
}
void punct::deplas(int a, int b)
{
	x = x + a;
	y = y + b;
}
void punct::ix(int a)
{
	x = a;
}
void punct::iy(int a)
{
	y = a;
}
void punct::icol(long a)
{
	col = a;
}
int punct::dax()
{
	return x;
}
int punct::day()
{
	return y;
}
long punct::dacol()
{
	return col;
}
punct::~punct(){}