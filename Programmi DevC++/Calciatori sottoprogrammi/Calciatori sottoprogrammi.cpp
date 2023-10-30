#include <iostream>
#include <string.h>

using namespace std;

struct calciatori
{
	string nome;
	string cognome;
	string squadra;
	int reti;
};
// inizio dichiarazione PROTOTIPI DEI SOTTOPROGRAMMI

void caricamentocalciatori(int &n,struct calciatori campionato[]);
int calcolomassimo(int n,struct calciatori &max,struct calciatori campionato[]);
void stampabomber (struct calciatori max);
// FINE dichiarazione PROTOTIPI DEI SOTTOPROGRAMMI

int main()
{
	int n;
	struct calciatori max;
	struct calciatori campionato[100];
  	
	
	caricamentocalciatori(n,campionato);
    calcolomassimo(n,max,campionato);
    stampabomber(max);
    
    system("pause");
  return 0; 
}

void caricamentocalciatori(int &n,struct calciatori campionato[])

{
	int i;
	cout<<"Quanti calciatori vuoi inserire?"<<endl;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"Inserire nome: ";
		cin>>campionato[i].nome;
		cout<<"Inserire cognome ";
		cin>>campionato[i].cognome;
		cout<<"Inserire squadra ";
		cin>>campionato[i].squadra;
		cout<<"Inserire reti ";
		cin>>campionato[i].reti;
	}
}

int calcolomassimo(int n,struct calciatori &max,struct calciatori campionato[])
{
	int k;
	max=campionato[0];
	
	for(k=0;k<n;k++)
	{
		if(max.reti<campionato[k].reti)
		max=campionato[k];
	}
	
}

void stampabomber (struct calciatori max)
{
	cout<<"Il bomber del campionato e': "<<max.nome<<"  "<<max.cognome<<"  "<<max.reti;
}


