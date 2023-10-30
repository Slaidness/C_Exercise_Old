#include <iostream>
#include <string.h>

using namespace std;

struct AGENDA
{
	string nome;
	string cognome;
	float stipendio;
	int Anni_Di_Servizio;
	string tel;
};

void carica(int n, struct AGENDA DIP[])
{
	int i;
	cout<<"Inserire quantita dipendenti: ";
	cin>>n;
	cout<<endl;
	i=0;
	
	while(i<n){
		
		cout<<"Inserire nome: ";
		cin>>DIP[i].nome;
		cout<<"Inserire cognome: ";
		cin>>DIP[i].cognome;
		cout<<"Inserire stipendio: ";
		cin>>DIP[i].stipendio;
		cout<<"Inserire anni di servizio: ";
		cin>>DIP[i].Anni_Di_Servizio;
		cout<<"Inserire numero telefonico: ";
		cin>>DIP[i].tel;
		
		cout<<endl;
		i++;
		
		
		
	}
	
}


int minimo(int n, struct AGENDA DIP[])


{ 

	struct AGENDA tmp;
	int k, i;
	
	for (i=0; i<j-1; i++){
	for (k=i+1; k<=j; k++){
		if(DIP[i].stipendio>DIP[k].stipendio){
		
	tmp=DIP[i];
	DIP[i]=DIP[k];
	DIP[k]=tmp;
}
}
	}
	
}


int media(struct AGENDA DIP[], int n, float med){
	int i;
	
	float somma;
	somma=0;
	i=0;
	
	while (i<n){
	somma=DIP[i].stipendio+somma;	
	i++;
	
	}
	
	med=somma/n;
}

void stampa(struct AGENDA DIP[], float med){
	int i;
	i=0;
	cout<<"Lo stipendio minimo e' di: "<<DIP[i].stipendio;
	cout<<"La media degli stipendi e' di: "<<med;
	cout<<endl;
}

int main(){
	int n;
	struct AGENDA DIP [100];
	float med;
	
	carica(n, DIP);
	minimo(n, DIP);
	media(DIP, n, med);
	stampa(DIP, med);
	
	system ("Pause");
	return 0;
}
