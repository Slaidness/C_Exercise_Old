#include <iostream>
#include <math.h>
using namespace std;
int main () 
{
	int N1,N2;
	int add,sot,molt,divi;
	float DIVI;
	cout <<"Inserisci il primo numero ";
	cin >> N1;
	cout <<"Inserisci il secondo numero ";
	cin >> N2;
	add = N1+N2;
	sot = N1-N2;
	molt = N1*N2;
	divi = N1/N2;
	cout <<N1<<" + "<<N2<<" = " <<add<<endl;
	cout <<N1<<" - "<<N2<<" = " <<sot<<endl;
	cout <<N1<<" * "<<N2<<" = " <<molt<<endl;
	cout <<N1<<" / "<<N2<<" = " <<divi<<endl;
	system ("pause");  
	
}
