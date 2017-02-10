#include "punct.h"
#include "element.h"
#include <stdio.h>

element::element(punct *adr, int tp)
{
	p = adr;
	tip = tp;
	urm = NULL;
}
void element::afisez()
{
	p->afisez();
}
element::~element(){}