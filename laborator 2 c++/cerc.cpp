#include <iostream>
#include "cerc.h"
using namespace std;

cerc::cerc(int abs, int ord, long c, int drr) : punct(abs, ord, c)
{
	r = drr;
}
void cerc::afisez()
{
	punct::afisez();
	cout << "r =" << r << endl;
}
void cerc::ir(int raza)
{
	r = raza;
}
int cerc::dar()
{
	return r;
}
cerc::~cerc(){}