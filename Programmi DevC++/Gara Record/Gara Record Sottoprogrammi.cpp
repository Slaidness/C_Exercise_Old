#include <iostream>
#include <string>
using namespace std;

struct GARA
{
	string nome;
    int sec;
    int cent;
};

void carica(int &n, struct GARA part[], int &i);
int calcolo_gara(int i, int j, struct GARA part[], struct GARA tmp, int n);
void stampa(int i, int n, struct GARA part[]);


int main()
{
	int i, n, j;
	struct GARA part[100];
	struct GARA tmp;
	
	carica(n, part, i);
	calcolo_gara( i, j, part, tmp, n);
	stampa(i, n, part);
	
	system ("Pause");
	return 0;
}






void carica(int &n, struct GARA part[], int &i)
{
	cout<<"Inserire il numero dei partecipanti: ";
	cin>>n;
	
	//Caricamento Tabella
	i=0;
	
	while (i<n)
	{
		cout<<"Inserire nome partecipante numero "<<i+1<<endl;
		cin>>part[i].nome;
		cout<<"Inserire secondi partecipante numero "<<i+1<<endl;
		cin>>part[i].sec;
		//Centesimo di secondo
		part[i].cent=part[i].sec*100;	
		i++;
	}
}

int calcolo_gara(int i, int j, struct GARA part[], struct GARA tmp, int n)
{

	for (i=0; i<n; i++)
for (j=i+1; j<n; j++)

if (part[i].sec>part[j].sec)
{
	tmp=part[i];
	part[i]=part[j];
	part[j]=tmp;
	
}
}

void stampa(int i, int n, struct GARA part[])
{
		cout<<"Elenco partecipanti"<<endl;
	cout<<"Nome\t\tsecondi\t\tcentesimo di secondo"<<endl;
	for (i=0; i<n; i++)
	cout<<part[i].nome<<"\t\t"<<part[i].sec<<"\t\t"<<part[i].cent<<endl;
}

