#include <iostream>
#include "om.h"
using namespace std;

void om::creare(char*num, float in, float gr){
	nume = num;
	h = in;
	g = gr; 
}    //ex1
om::om(){};//3
om::om(char *num, float in, float gr)
{
	nume = num;
	h = in;
	g = gr;
}

char* om::getnume()
{
	return nume;
}

void om::setnume(char *num)
{
	nume = num;
}

float om::dah()
{
	return h;
}

void om::ih(float a)
{
	h = a;
}

float om::dag()
{
	return g;
}

void om::ig(float w)
{
	g = w;
}

void om::afisez(char *nume,float in,float gr)//ex5
{
	cout<<"Numele: "<<this->nume<<"\nInaltimea: "<<in<<"\nGreutatea "<<gr<<endl;
}

void om::coincide(om om1)//ex6
{
	if(this->h==om1.h)
	{
	   cout<<this->nume<<" si "<<om1.nume<<" au aceeasi inaltime."<<endl;
	}
	else cout << this->nume << " si " << om1.nume << " au inaltimi diferite." << endl;
	
	if(this->g==om1.g) 
	{
		cout<<this->nume<<" si "<<om1.nume<<" au aceeasi greutate."<<endl;
	}
	else cout << this->nume << " si " << om1.nume << " au greutati diferite." << endl;
}
om::~om(){};