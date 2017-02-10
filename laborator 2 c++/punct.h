#pragma once
class punct
{
protected:
	int x;
	int y;
	long col;
public:
	punct(int abs, int ord, long c);
	void ix(int a);
	void iy(int a);
	void icol(long a);
	int dax();
	int day();
	long dacol();
	virtual void afisez();
	void deplas(int a, int b);  //ex.2
	~punct();
};
