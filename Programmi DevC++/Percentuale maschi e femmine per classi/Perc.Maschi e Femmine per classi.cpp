#include <iostream>
#include <string>
using namespace std;

float tot, totm, totf, pm, pf, n;

void calcolaclasse()
{
	float tot, numm, numf, pm, pf;
	string classe;
	 
	cout<<"inserire classe\n";
	cin>>classe;
	cout<<"inserire il numero di maschi\n";
	cin>>numm;
	cout<<"inserire il numero di femmine\n";
	cin>>numf;
	tot=numm+numf;
	pm=(numm/tot)*100;
	pf=(numf/tot)*100;
	cout<<"classe "<<classe<<"  Numero allievi"<<tot<<endl;
	cout<<"Percentuale maschi"<<pm<<endl;
	cout<<"Percentuale femmine"<<pf<<endl<<endl;
	totm=totm+numm;
	totf=totf+numf;
}

int main()
{
	int i;
	totm=0;
	totf=0;
	cout<<"Inserire numero di classi\n";
	cin>>n;
	
	for(i=0;i<n;i++)
	calcolaclasse();
	tot=totf+totm;
	pm=(totm/tot)*100;
	pf=(totf/tot)*100;
	cout<<"PERC.MASCHI SCUOLA    "<<pm<<endl;
    cout<<"PERC.FEMMINE SCUOLA   "<<pf<<endl;
    system ("pause");
    return(0);
}
