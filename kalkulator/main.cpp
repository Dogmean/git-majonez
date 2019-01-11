#include <iostream>

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

	if(operacja == "1")
		dodawanie(a,b);
	else if(operacja == "2")
		odejmowanie(a,b);
	else if(operacja == "3")
		mnozenie(a,b);
	else if(operacja == "4")
		dzielenie(a,b);
	else cout <<"Zle wybrales, z nami koniec. Zegnaj.";
	return 0;
}
