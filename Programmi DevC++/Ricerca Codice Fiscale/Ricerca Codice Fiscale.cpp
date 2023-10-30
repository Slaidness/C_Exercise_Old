#include <iostream>
#include <string.h>
using namespace std;

struct PERSONA
{
	string nome;
	string cognome;
	string cod;
};

void carica(int &n, int i, struct PERSONA PERS[]);
int ricerca(int n, int &i, struct PERSONA PERS[]);
void stampa(int n, int i, struct PERSONA PERS[]);


int main()
{
	int n, i;
	struct PERSONA PERS[100];
	
	carica(n, i, PERS);
	ricerca(n, i, PERS);
	stampa(n, i, PERS);
	
	system ("pause");
	return 0;
	
}


void carica(int &n, int i, struct PERSONA PERS[]){
	
	
		cout<<"Inserire numero elementi: ";
	cin>>n;
	i=0;
	
	
	while (i<n)
{
	
    cout<<"Inserire nome: ";
    cin>>PERS[i].nome;

	cout<<"Inserire cognome: ";
	cin>>PERS[i].cognome;
	
	cout<<"Inserire codice fiscale ";
	cin>>PERS[i].cod;
	
	cout<<endl;
i++;

}
}

int ricerca(int n, int &i, struct PERSONA PERS[]){

string nome2, cognome2;	
cout<<"Inserire nome: ";
cin>>nome2;
cout<<"Inserire cognome: ";
cin>>cognome2;

cout<<endl;
i=0;

while(i<=n && PERS[i].nome!=nome2 && PERS[i].cognome!=cognome2)
{
i++;
}

}

void stampa(int n, int i, struct PERSONA PERS[]){
		if (i>=n)
	cout<<"La persona non esiste ";
	else
	 cout<<"La persona "<<PERS[i].nome<<" "<<PERS[i].cognome<<" "<<PERS[i].cod<<" e' in posizione "<<i+1;
	 
	 cout<<endl;
	 
}

