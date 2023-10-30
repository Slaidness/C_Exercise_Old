#include <iostream>
#include <string>
using namespace std;

struct GARA
{
	string nome;
    int sec;
    int cent;
};



void carica_part(struct gara)
{
	int i, n;
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





int main()
{
	const int maxp=100;
	GARA part[maxp];
	
GARA tmp;
int j;

for (i=0; i<n; i++)
for (j=i+1; j<n; j++)

if (part[i].sec>part[j].sec)
{
	tmp=part[i];
	part[i]=part[j];
	part[j]=tmp;
	
}
	
	cout<<"Elenco partecipanti"<<endl;
	cout<<"Nome\t\tsecondi\t\tcentesimo di secondo"<<endl;
	for (i=0; i<n; i++)
	cout<<part[i].nome<<"\t\t"<<part[i].sec<<"\t\t"<<part[i].cent<<endl;
	system("pause");
	return 0;
	
}


