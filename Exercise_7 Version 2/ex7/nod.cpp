#include <iostream>	
#include"om.h"      
#include "nod.h"
using namespace std;
nod::nod(om persoana) {
	o.setname(persoana.get_name());
	o.seth(persoana.get_inaltime());
	o.setg(persoana.get_greutate());
	urmator = NULL;
}
nod::~nod() {};

void nod::ShowList() {
	cout << this->o.get_name() << endl;
	cout << this->o.get_name() << endl;
	cout << this->o.get_name() << endl;
	cout << endl;
}
nod* nod::nextnod() {
	return this->urmator;
}
void nod::setnod(nod* nextN) {
	this->urmator = nextN;
}
