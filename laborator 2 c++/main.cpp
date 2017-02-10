#include <iostream>
#include <string>
#include "segment.h"
#include "cerc.h"
#include "element.h"
using namespace std;
int main(int argc, char* argv[])
{
	punct p(10, 20, 12312);
	punct q(50, 200, 12312);
	/*cout << "Parametri initili p:\n";
	p.afisez();
	cout << "--------------------------------------------------------\n";
	cout << "Parametrii initiali q:\n";
	q.afisez();
	cout << "--------------------------------------------------------\n";
	p.ix(11); p.iy(21); p.icol(14320);
	p.dax(); p.day(); p.dacol();
	q.ix(60); q.iy(210); q.icol(11312);
	q.dax(); q.day(); q.dacol();
	cout << "\nParametrii obiectului p de tip punct dupa modificare sunt: \n";
	p.afisez();
	cout << "--------------------------------------------------------\n";
	cout << "\nParametrii obiectului q de tip punct dupa modificare sunt:\n ";
	q.afisez();
	cout << "********************************************************\n";*/
	segment s(10, 20, 1212, 30, 20);
	//cout << "Parametrii initiali ai obiectului s:\n ";
	//s.afisez();
	//cout << "--------------------------------------------------------\n";
	//s.idx(35); s.idy(29);
	//s.dadx(); s.dady();
	//cout << "Parametrii obiectului s de tip segment dupa modificarea dx si dy:\n ";
	//s.afisez();
	//cout << "--------------------------------------------------------\n";
	//s.deplas(1000, 1000);  //ex.2
	//cout << "Coordonatele celor 2 puncte dupa deplasare:\n";
	//s.afisez();
	//cout << "********************************************************\n";
	cerc c(10, 20, 1212, 50);
	/*cout << "Parametrii initiali ai obiectului c:\n";
	c.afisez();
	cout << "--------------------------------------------------------\n";
	c.deplas(1000, 1000);
	cout << "Parametrii x si y dupa deplasare: ";
	c.afisez();
	cout << "--------------------------------------------------------\n";
	c.ir(99);  c.dar();
	cout << "Parametrii obiectului c de tip segment dupa modificarea razei:\n ";
	c.afisez();*/

	//Exercitiul 3
	cout << "Exercitiul 7: Afisarea listei" << endl;
	// Crearea listei
	element *adr; // Adresa primului element e adr
	element *elc; // Adresa elementului curent
	adr = new element(&s, 1); //obiect de tip segment de tip 1
	elc = adr; // Mai departe folosesc elc.
	// Adaug cercul
	elc->urm = new element(&c, 2); //obiect de tip cerc de tip 2
	elc = elc->urm;
	// Adaug primul punct
	elc->urm = new element(&p, 0);  //obiect de tip punct de tip 0
	elc = elc->urm;
	// Afisez lista
	// - vin pe primul element
	elc = adr;
	while (elc) {
		elc->afisez();
		elc = elc->urm;
	}

	cout << "$$$$$$$$$$$$--SFIRSIT--$$$$$$$$$$$$$"; 
	cout << "\n\nA efectuat: Ciobanasu Ion, studentul grupei 3.2 TI\n";
	cout << "A verificat: lectorul Diaconu Elena\n";
	

	system("PAUSE");
	return 0;
}