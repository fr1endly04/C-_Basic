#include <iostream>	
#include "om.h"     
#include "nod.h"
using namespace std;
nod::nod(om persoana) {
	o.setname(persoana.get_name());
	o.seth(persoana.get_inaltime());
	o.setg(persoana.get_greutate());
	nodurm = NULL;
}
nod::~nod() {};

void nod::afisezLista() {
	cout << this->o.get_name() << endl;
	cout << this->o.get_inaltime() << endl;
	cout << this->o.get_greutate() << endl;
	cout << endl;
}
nod* nod::nextnod() {
	return this->nodurm;
}
void nod::setnod(nod* nextN) {
	this->nodurm = nextN;
}