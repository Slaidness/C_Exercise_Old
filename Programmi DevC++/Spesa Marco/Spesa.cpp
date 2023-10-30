#include <iostream>
int main()

{
    using namespace std;

	float s2, p2, o2, P2, s1, p1, o1, P1, s, p, o, P, prezzo, media;
	
	cout<< "Inserire prezzo scarole al chilo:       ";
	cin>> s1;
	
	cout<< "Inserire prezzo pomodorini al chilo:    ";
	cin>> p1;
	
	cout<< "Inserire prezzo orata:                  ";
	cin>> o1;
	
	cout<< "Inserire prezzo pane:                   ";
	cin>> P1;
	cout<< "\n";
	
	
	cout<< "Inserire chili di scarole d'acquistare: ";
	cin>> s2;
	
	cout<< "Inserire chili di pomodorini d'acquistare: ";
	cin>> p2;
	
	cout<< "Inserire orate d'acquistare: ";
	cin>> o2;
	
	cout<< "Inserire pezzi di pane da acquistare: ";
	cin>> P2;
	cout<< "\n";
	
	s = s2*s1;
	p = p2*p1;
	o = o2*o1;
	P = P2*P1;
	
	prezzo = s+p+o+P;
	media = prezzo/4;
	
	cout<< "Il costo totale e' di:     " << prezzo << " Euro " <<endl;
	cout<< "La media del costo e' di:  " << media << " Euro " <<endl; 
	
	system ("PAUSE");

}  
