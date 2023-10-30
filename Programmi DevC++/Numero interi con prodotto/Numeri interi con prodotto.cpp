#include <iostream>
using namespace std;
int main ()

{
	int max, num1, num2, min, cont, prod;
	
	cout<<"Inserire il primo numero intero: ";
	cin>>num1;
	
	cout<<"Inserire il secondo numero intero: ";
	cin>>num2;
	
	max=0;
	min=0;
	cont=0;
	
	if (num1>max){
	max=num1;}
	
	if (num2>max){
	max=num2;}
	
	if (num1>min){
	min=num1;}
	
    if (min>num2){
    min=num2;}
 
    cout<<"Il numero intero piu grande e': "<<max<<endl;
    cout<<"Il numero intero piu piccolo e': "<<min<<endl<<endl;
    
    
    while(cont<min){
	
    cont++;
    prod=prod+max;
}
 
 cout<<"Il prodotto dei due numeri interi e'' di: "<<prod<<endl<<endl;
    
    system ("pause");
	
	
}
