#include "punct.h"
class segment : public punct
{
	int dx;
	int dy;
public:
	segment(int abs, int ord, long c, int dxx, int dyy);
	void idx(int a);
	void idy(int a);
	int dadx();
	int dady();
	void afisez();
	void deplas(int, int);
};

