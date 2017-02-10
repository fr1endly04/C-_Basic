#include "punct.h"

class element
{
public:
	element * urm;
	int tip;
	punct * p;
	void afisez();
	element(punct *adr, int tp);
	element();
	virtual ~element();
};