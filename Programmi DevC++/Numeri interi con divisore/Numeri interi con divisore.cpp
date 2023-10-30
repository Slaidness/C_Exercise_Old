#include <iostream>
using namespace std;
int main ()

{
	int num1, num2, cont;
	
	cout<<"Inserire il dividendo: ";
	cin>>num1;
	
	cout<<"Inserire il divisore: ";
	cin>>num2;
    
    cont=0;
    
    while(cont<num1){
	
    cont++;
    num1=num1-num2;
}
 
 cout<<"Il resto e di "<<num1<<" e il quoziente e' di: "<<cont<<endl;
    
    system ("pause");
	
	
}
