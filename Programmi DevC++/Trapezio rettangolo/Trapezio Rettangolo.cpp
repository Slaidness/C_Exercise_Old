#include <iostream>

int main()



{
using namespace std;

cout <<"Benventuo al programma per calcolare l' area e il perimetro di un trapezio rettangolo. "<<endl;

float B1;
float B2;
float H;
float L1;
float L2;
float A;
float P;


cout <<"Inserisci base minore: ";
cin >> B1;

cout <<"Inserisci base maggiore: ";
cin >> B2;

cout <<"Inserisci altezza: ";
cin >> H;

cout <<"Inserisci primo lato: ";
cin >> L1;

cout <<"Inserisci secondo lato: ";
cin >> L2;

cout<< "\n";

A = (B1+B2)*H/2;
P = B1+B2+L1+L2;

cout << "L'area e': " << A << endl << "Il perimetro e': " << P << endl;
cout << endl;

system ("PAUSE");

	
}

