#include <iostream>
#include <math.h>
using namespace std;

//Variabili globali
float c1, c2, ipot, perim;

void ins_dati()
{
	cout<<"Inserire il primo cateto\n";
	cin>>c1;
	cout<<"Inserire il secondo cateto\n";
	cin>>c2;
}

float calcolaperim()
{
	ipot=sqrt(c1*c1+c2*c2);
	return(c1+c2+ipot);
}

void stampa()
{
	cout<<"Perimetro = "<<perim<<endl;
}

int main()
{
	ins_dati();
	perim = calcolaperim();
	stampa();
	system ("pause");
	return(0);
}
