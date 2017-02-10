#include <iostream>	
#include "om.h"     
#include "nod.h"
using namespace std;
nod::nod(om persoana) {
	o.inume(persoana.danume());
	o.ih(persoana.dah());
	o.ig(persoana.dag());
	nodurm = NULL;
}
nod::~nod() {};

void nod::afisezLista() {
	cout << this->o.danume() << endl;
	cout << this->o.dah() << endl;
	cout << this->o.dag() << endl;
	cout << endl;
}
nod* nod::nextnod() {
	return this->nodurm;
}
void nod::setnod(nod* nextN) {
	this->nodurm = nextN;
}
