#include "om.h"
#include <iostream>
using namespace std;
int main()
{
	om Vasile, Ioan;
	Vasile.creare("Vasile", 1.78, 88); //ex1,ex6
	Ioan.creare("Ioan", 1.82, 91);     //ex1,ex6
	//Ioan.g=87; -nu merge deorece se acceseaza membrii privati ai clasei...//ex2
	//cout << "Numele: " << Vasile.getnume() <<"\nInaltimea: " << Vasile.dah() <<"\nGreutatea: "<<Vasile.dag()<< endl;  //ex1,ex3
	//cout << "Numele: " <<Ioan.getnume() <<"\nInaltimea: " << Ioan.dah() <<"\nGreutatea: "<<Ioan.dag()<<endl;   //ex3
	om* Ciobanasu=new om("Ciobanasu",1.73,63);//ex4
	om* Stefan = new om();
	
	//Vasile.afisez("Vasile",1.78,88);//ex5
	//Ioan.afisez("Ioan", 1.78, 88);//ex5
	Vasile.coincide(*Ciobanasu);
	Vasile.coincide(Vasile);
	Ioan.coincide(Vasile);
	Ciobanasu->coincide(Ioan);
	
	delete Ciobanasu; //ex.4
	
	system("PAUSE");
}