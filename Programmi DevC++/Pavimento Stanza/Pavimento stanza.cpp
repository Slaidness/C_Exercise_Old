#include <iostream>
using namespace std;
int main()

{
	float piast, mano, ore, iva, stanza, impt, piva;


	cout<<"La stanza e' di dimensioni 7x4"<<endl;
	cout<<endl;
	
	cout<<"Inserire il costo delle piastrelle al metro quadro:   ";
	cin>>piast;
	
	cout<<"Inserire il costo orario della manodopera:            ";
	cin>>mano;
	
	cout<<"Inserire il numero di ore inpiegate:                  ";
	cin>>ore;
	
	cout<<"Inserire la percentuale IVA:                          ";
	cin>>iva;
	
	stanza=7*4; 
	piva=((stanza*piast)+(mano*ore))*iva/100; //calcolo percentuale
	impt=piva+((stanza*piast)+(mano*ore)); //calcolo percentuale sommato importo
	
	cout<<endl;
	cout<<"L'importo e' di: "<<impt<<" Euro"<<endl;
	cout<<endl;
	
	system ("Pause");
	return 0;
	
}
