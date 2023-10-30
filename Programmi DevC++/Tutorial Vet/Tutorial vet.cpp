#include <iostream>

using namespace std;
int main()


{
int vet[100]={0, 1, 2, 4};
int i;

//Ho messo 4 a cazzum perchè è for, ma se fosse stato while dovevo inserire N come "Fino a quante volte ripeto questo ciclo?"
//i=0;
//cin<<n;	
// while (i<n){
//cout<<"Nella posizione: "<<i<<" Del vettore ha dentro un valore di: "<<vet[i]<<endl;
//i++; }

for (i=0; i<4; i++)
{
cout<<"Nella posizione: "<<i<<" Del vettore ha dentro un valore di: "<<vet[i]<<endl;
}
	
	system ("Pause");
	return 0;
}
