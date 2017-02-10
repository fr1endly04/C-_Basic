#include <iostream>
#include "om.h"
#include "nod.h"
using namespace std;
int main()
{
	nod *primul = NULL;
	nod *nodcurent;

	int bul = 0;
	float newHeight, newWeight;
	int alege;
	do {

		cout << "Numele persoanei: ";
		char *newName = new char[30];
		cin >> newName;	//citirea de la tastatura
		cout << "Inaltimea persoanei: ";
		cin >> newHeight;
		cout << "Greutatea persoanei: ";
		cin >> newWeight;
		cout << endl;

		om omcurent(newName, newHeight, newWeight);
		nod *temp;				//pointer la obiect de tip nod
		temp = new nod(omcurent);	//initializarea datelor obiectului ”omcurent”
		if (primul == NULL)
			primul = temp;
		else {							//daca primul nod nu este NULL
			nodcurent = primul;		//”nodcurent” ia valoarea ”primul”
			while (nodcurent->nextnod() != NULL)
				nodcurent = nodcurent->nextnod();		//”nodcurent” ,ia valoarea nod urmator pina la sfirsitul listei
			nodcurent->setnod(temp);		//in ultimul nod se inscrie legatura (link) la nod nou
		}
		cout << "alege 1 pentru a continua: " << endl;
		cout << "alege 2 pentru a arata lista: " << endl;
		cin >> alege;
		if (alege == 2) {
			bul += 1;
			break;
		}

	} while (bul != 1);

	nod *list;			//pointer la obiect de tip nod pentru afisarea listei
	list = primul;		//la inceputul listei
	if (list == NULL)
		cout << "The List is empty";
	else {
		while (list != NULL) {
			list->afisezLista();
			list = list->nextnod();
		}
	}

	system("pause");
	cin.get();
}