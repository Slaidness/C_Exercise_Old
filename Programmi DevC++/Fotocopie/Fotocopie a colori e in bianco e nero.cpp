#include <iostream>
#include <math.h>

int main()


//Il costo unitario delle fotocopie in bianco e nero è di 10 centesimi di euro, quello delle fotocopie a colori è di 80 centesimi.
//Il costo per rilegare un fascicolo di fotocopie è di 1.30 euro.

//Letto in input il numero delle fotocopie bianco e nero e quello delle fotocopie a colori, calcola e stampa.

//°Il numero di fotocopie totali acquistate.
//°Il costo delle fotocopie bianco e nero.
//°Il costo delle fotocopie a colori.
//°Il costo totale del fascicolo.

{
	
using namespace std;

float a; //fotocopie.
float a1; //costo fotocopie bianco e nero.
float a2; //costo fotocopie a colori.
float A1; //costo rilegare bianco e nero.
float A2; //costo rilegare a colori.

cout<<"Prezzo fotocopie in bianco e nero: 0.10 Centesimi " << "\n";
cout<<"Prezzo fotocopie a colori:         0.80 Centesimi " << "\n";
cout<<"Prezzo rilegare un fascicolo:     1.30 Euro      " << "\n";
cout<< "\n";

cout<<"Inserisci quantita' di fotocopie da acquistare: ";
cin>> a;

a1 = (a*0.10);
a2 = (a*0.80);
A1 = (a1+1.30);
A2 = (a2+1.30);

cout<< "\n";
cout<< "Il costo delle fotocopie in bianco e nero e' di: " << a1 << " Euro " << "\n";
cout<< "\n";
cout<< "Il costo delle fotocopie a colori e' di: " << a2 << " Euro " << "\n";
cout<< "\n";
cout<< "Il costo del fascicolo in bianco e nero e' di: " << A1 << " Euro " << "\n";
cout<< "\n";
cout<< "Il costo del fascicolo a colori e' di: " << A2 << " Euro " << "\n";
cout<< "\n";

system ("PAUSE");
	
		
}

