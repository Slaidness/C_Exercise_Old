#include <iostream>
using namespace std;
int main()

{
	int a1, m1, g1, a2, m2, g2, anno, diff_a, m1_g, m2_g, diff_m, diff_g, diff;
	
	
	cout<<"Inserire la data maggiore: (AAAA/M/G) ";
	cout<<endl;
	
	cout<<"Inserire AAAA: ";
	cin>>a1;
	
	cout<<"Inserire M:    ";
	cin>>m1;
	
	cout<<"Inserire G:    ";
	cin>>g1;
	cout<<endl;
	
	cout<<"Inserire la data minore: (AAAA/M/G) ";
	cout<<endl;
	
	cout<<"Inserire AAAA: ";
	cin>>a2;
	
	cout<<"Inserire M:    ";
	cin>>m2;
	
	cout<<"Inserire G:    ";
	cin>>g2;
	cout<<endl;
	
	anno=a1-a2; //calcolo differenza anni
	diff_a=anno*365; //calcolo differenza anni trasformati in giorni
	
	m1_g=m1*30; //calcolo primo mese in giorni
	m2_g=m2*30;	//calcolo secondo mese in giorni
	diff_m=m1_g-m2_g; //calcolo differenza mesi in giorni
	
	diff_g=g1-g2; //calcolo differenza giorni
	
	diff=diff_g+diff_m+diff_a; //differenza delle date in giorni
	
	cout<<"La differenza in giorni e' di: "<< diff << endl;
	
	system ("pause");
	return 0;
	
}
