#include <iostream>
#include "om.h"
using namespace std;
om::om() {};
om::om(char *num, double in, double gr)
{
	name = num;
	h = in;
	g = gr;
}
om::~om() {};
char*  om::get_name()
{
	return name;
}
void om::setname(char *num)
{
	name = num;
}
float om::get_inaltime()
{
	return h;
}
void om::seth(double a)
{
	h = a;
}
float om::get_greutate()
{
	return g;
}
void om::setg(double b)
{
	g = b;
}

