#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


void carica(struct dipendenti dip[], int &n);
void trova(struct dipendenti dip[], int n);


struct dipendenti
{
	string nome;
	string cognome;
	string conto;
	float saldo;
};

int main()
{
	int n;
	struct dipendenti dip[100];
	carica(dip, n);
	trova(dip, n);
	
	system("pause");
	return (0);
}

void carica(struct dipendenti dip[], int &n)
{	
int i=0;
n=0;
ifstream file_banca ("banca.txt", ios::app);
    while(!file_banca.eof()){
	
	file_banca>>dip[i].nome>>dip[i].cognome>>dip[i].conto>>dip[i].saldo;
	i++;
    n++;   
	}
	
	
}

void trova(struct dipendenti dip[], int n)
{
string conto2;

int i=0;	
ifstream file_banca ("banca.txt", ios::app);

	cout<<"Inserire numero conto per la ricerca del cliente: ";
	cin>>conto2;
	
	while(i<n){
		
		file_banca>>dip[i].nome>>dip[i].cognome>>dip[i].conto>>dip[i].saldo;
		if(conto2==dip[i].conto)
        cout<<"nome= "<<dip[i].nome<<" cognome= "<<dip[i].cognome<<" conto= "<<dip[i].conto<<" saldo= "<<dip[i].saldo<<endl;
		i++;

		
	}



}
