#include <iostream>

using namespace std;
int main()

{
	float x, y, a, Pa, spesa;
    
    
    cout<<"Inserire pezzi d'acquistare:  ";
    cin>>a;
    cout<<"Inserire costo dei prezzi:    ";
    cin>>Pa;
    cout<<endl;
    
    spesa = a*Pa;
    
    cout<<"Inserire lo sconto in caso di acquisto fino a 10 pezzi:      ";
    cin>>x;
    cout<<"Inserire lo sconto in caso di acquisto maggiore di 10 pezzi: ";
    cin>>y;
    cout<<endl;
    
    
    if (a<=10)
    spesa = spesa-(spesa*x/100);
    else
    spesa = spesa-(spesa*y/100);
    
    cout<<"La spesa e' di: "<<spesa<<" Euro"<<endl;
    
    system ("Pause");
    
    
}
