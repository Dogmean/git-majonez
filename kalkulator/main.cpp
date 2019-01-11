#include <iostream>
#include "mnozenie.h"
#include  "dzielenie.h"
#include  "odejmowanie.h"
using namespace std;

int a, b;

int main()
{
	int operacja;
	cout<<"Podaj liczbe a: ";cin>>a;cout<<endl;
	cout<<"Podaj liczbe b: ";cin>>b;cout<<endl;
	cout<<"Co chcesz zrobic?"<<endl;
	cout<<"Dodac a do b [1]"<<endl<<"Odjac a od b [2]"<<endl<<"Pomnozyc a przez b [3]"<<endl<<"Podzielic a przez b [4]"<<endl;
	cin>>operacja;

	switch(operacja) {
		case 1:
			dodawanie(a,b);
			break;
		case 2:
			odejmowanie(a,b);
			break;
		case 3:
			mnozenie(a,b);
			break;
		case 4:
			dzielenie(a,b);
			break;
		default:
			cout <<"Zle wybrales, z nami koniec. Zegnaj.";
			break;
	}
	return 0;
}
