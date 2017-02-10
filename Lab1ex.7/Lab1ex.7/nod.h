#pragma once

#include"om.h"

class nod {
	om o;
	nod *nodurm;
public:
	nod(om);
	~nod();
	void afisezLista();
	nod* nextnod();
	void setnod(nod* nextN);
};
