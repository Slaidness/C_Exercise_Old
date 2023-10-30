#include <iostream>
#include <string>

using namespace std;
int main()

{
	int ind, p1, p2, p3, orale, punti_p, punti_t, cs, b;
	string nome,studio;
	cout<<"Inserire nome dello studente: ";
	cin>>nome;
	
	cout<<"Inserire indirizzo scolastico:"<<endl<<endl;
	
	cout<<"1. INSTITUTO TECNICO COMMERCIALE"<<endl;
	cout<<"2. INSTITUTO TECNICO INDUSTRIALE"<<endl;
	cout<<"3. INSTITUTO PROFESSIONALE TURISTICO"<<endl;
	
	cout<<"INSERIRE NUMERO < 1-3 >: ";
	cin>>ind;
	
	
	switch (ind)
	
	{
	
	case 1: 
	cout<<"Ragioniere"<<endl;
	studio="ragioniere";
	break;
	
	case 2:
	cout<<"Perito industriale"<<endl;
	break;
	
	case 3:
	cout<<"Operatore turistico"<<endl;
	break;
	
	default:
	cout<<"Istituto non immaginato"<<endl;
	break;	
	
    }  
    cout<<studio;
    if (ind>=4)
    {
               cout<<"Esci"<<endl;
    system ("pause");
    return 0;
    }
	cout<<"Punti massimi prova scritta: 15"<<endl;
	cout<<"Punti massimi prova orale: 35"<<endl;
    cout<<"Punti massimi credito scolastco: 25 "<<endl<<endl;
    cout<<"Se il punteggio delle prove supera 70 punti e il credito supera 15 punti, esso viene applicato dei punti bonus da 1 a 5"<<endl<<endl;
    
    cout<<"Punteggio prima prova scritta: ";
    cin>>p1;
    
    cout<<"Punteggio seconda prova scritta: ";
    cin>>p2;
    
    cout<<"Punteggio terza prova scritta: ";
    cin>>p3;
    
    cout<<"Punteggio prova orale: ";
    cin>>orale;
    
    cout<<"Credito scolastico: ";
    cin>>cs;
    
    cout<<endl<<endl;
    
    punti_p=p1+p2+p3+orale;


    if (ind==1)
    {
    if ((punti_p>=70)&& (cs>=15))
    {
    cout<<"Inserire bonus: ";
	cin>>b;
	punti_t=punti_p+cs+b;
}
    else
    punti_t=punti_p+cs;


    if (punti_t>=60)
    {
                    if (punti_t>=100) 
	cout<<"Lo studente "<<nome<<" e' stato promosso con il punteggio di 100 con lode. \n Titolo di studio: ragioniere"<<endl;
   else
       cout<<"Lo studente "<<nome<<" e' stato promosso con il punteggio di "<<punti_t<<" \n Titolo di studio: ragioniere"<<endl;
    }
    else
    cout<<"Non promosso"<<endl;
    }
      if (ind==2)
    {
    if ((punti_p>=70)&& (cs>=15))
    {
    cout<<"Inserire bonus: ";
	cin>>b;
	punti_t=punti_p+cs+b;
}
    else
    punti_t=punti_p+cs;


    if (punti_t>=60)
    {
                    if (punti_t>=100) 
	cout<<"Lo studente "<<nome<<" e' stato promosso con il punteggio di 100 con lode. \n Titolo di studio: perito industriale"<<endl;
   else
       cout<<"Lo studente "<<nome<<" e' stato promosso con il punteggio di "<<punti_t<<" \n Titolo di studio: perito industriale"<<endl;
    }
    else
    cout<<"Non promosso"<<endl;
    }
      if (ind==3)
    {
    if ((punti_p>=70)&& (cs>=15))
    {
    cout<<"Inserire bonus: ";
	cin>>b;
	punti_t=punti_p+cs+b;
}
    else
    punti_t=punti_p+cs;


    if (punti_t>=60)
    {
                    if (punti_t>=100) 
	cout<<"Lo studente "<<nome<<" e' stato promosso con il punteggio di 100 con lode. \n Titolo di studio: operatore turistico"<<endl;
   else
       cout<<"Lo studente "<<nome<<" e' stato promosso con il punteggio di "<<punti_t<<" \n Titolo di studio: operatore turistico"<<endl;
    }
    else
    cout<<"Non promosso"<<endl;
    }
    

    
    system ("pause");
    return(0);
    
}
	
