#include <iostream>
using namespace std;

int tvet[24], i; 


void ins_gradi()
{
	
	cout<<"Scrivi 24 temperature per 24 zone"<<endl<<endl;
for (i=0;i<24;i++){
cout<<"Inserire gradi: ";
cin>>tvet[i];
}
}


float media()
{
	
	float media, somma;
	somma=0;
	
	for(i=0;i<24;i++){
		somma=somma+tvet[i];
	}
	media=somma/24;
	cout<<"La temperatura media e' di: "<<media<<endl;
}


int alta()
{
	int max;
	max=-999;
	
	for(i=0;i<24;i++){
	if (max<tvet[i])
	max=tvet[i];
	}
	cout<<"La temperatura piu' alta e' di: "<<max<<endl;	
}


int bassa()
{
	int min;
	min=999;
	
	for(i=0;i<24;i++){
	if (min>tvet[i])
	min=tvet[i];
	}
	cout<<"La temperatura piu' bassa e' di: "<<min<<endl;	
}


	int main(){
	ins_gradi();
	media();
	alta();
	bassa();
	
	system ("pause");
	return 0;
	

}
