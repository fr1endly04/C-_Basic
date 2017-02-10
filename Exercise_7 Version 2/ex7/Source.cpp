#include <iostream>
#include "om.h"
#include "nod.h"
using namespace std;
int main()
{
	nod *first = NULL;
	nod *nodcurent;
	float h_nou, g_nou; int choice;
	do {

		cout << "Numele persoanei: ";
		char *nume_nou = new char[30];
		cin >> nume_nou;

		cout << "Inaltimea persoanei: ";
		cin >> h_nou;
		cout << "Greutatea persoanei: ";
		cin >> g_nou;
		cout << endl;

		om newom(nume_nou, h_nou, g_nou);
		nod *tempor = new nod(newom);			//pointer la obiect de tip nod
		if (first==NULL)  //daca first este gol
			first = tempor;  //first devine referinta catre tempor
		else {							//daca primul nod nu este NULL
			nodcurent = first;		//”nodcurent” ia valoarea ”first”
			while (nodcurent->nextnod() != NULL)   //daca urmator nu este null
				nodcurent = nodcurent->nextnod();		//”nodcurent” ,ia valoarea nod urmator pina la sfirsitul listei
			nodcurent->setnod(tempor);				//in nod curent care se refera la "urmator" se inscrie obiectul temporar
		}
		cout << "Alegeti optiunea dorita:\n";
		cout << "alege 1 pentru a introduce un obiect nou: " << endl;
		cout << "alege 2 pentru a arata lista: " << endl;
		cin >> choice;
		if (choice == 2) {
			break;
		}
	} while (choice==1);

	nod *list;			//pointer la obiect de tip nod pentru afisarea listei
	list = first;		//la inceputul listei
	if (list==NULL)   
		cout << "The List is empty";
	else {
		while (list!=NULL) { 
			list->ShowList();
			list = list->nextnod();
		}
	}

	system("pause");
	cin.get();
}