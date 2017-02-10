#include <iostream>
#include "segment.h"
using namespace std;
segment::segment(int abs, int ord, long c, int dxx, int dyy) : punct(abs, ord, c)
{
	dx = dxx;
	dy = dyy;
}
void segment::afisez()
{
	punct::afisez();
	cout << "dx =" << dx << " dy =" << dy << endl;
}
void segment::idx(int a)
{
	dx = a;
}
void segment::idy(int a)
{
	dy = a;
}
int segment::dadx()
{
	return dx;
};
int segment::dady()
{
	return dy;
}
void segment::deplas(int a, int b){	//ex.2
	x += a;
	y += b;
	dx += a;
	dy += b;
}