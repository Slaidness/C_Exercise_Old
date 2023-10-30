#include <iostream>
int main()

{
	using namespace std;
	
	float x, mq, y, p, imptP, impt;
	
	cout<< "Inserire prezzo al metro quadro:       ";
	cin>> x;
	
	cout<< "Inserire metri quadri d'acquistare:   ";
	cin>> mq;
	
	cout<< "Inserire cifra fissa aggiuntiva:       ";
	cin>> y;
	
	cout<< "Inserire percentuale aggiuntiva:       ";
	cin>> p;
	cout<< endl;
	
	imptP = ((x*mq)+y)*p/100; //calcolo percentuale importo.
	impt = imptP+((x*mq)+y);  //calcolo percentuale importo sommato con l'importo.
		
	cout<< "Importo totale e' di: " << impt << endl;
	
	system ("PAUSE");
}
