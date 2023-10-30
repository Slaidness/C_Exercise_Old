#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()

{
	int num, Num_P;
	string risp;


	while (risp!="n"){
	
	srand(time(NULL));
	num=(rand()%10)+1;
	
	
	cout<<"Inserire numero predetto da 1 a 10: ";
	cin>>Num_P;
	cout<<endl;
	
	if (Num_P==num)
	cout<<"Hai vinto pasta e fagioli"<<endl;
	else
	cout<<"Hai perso, vergognati."<<endl;
	
	cout<<"Il numero era: "<<num<<endl;
	cout<<"Vuoi continuare? s/n"<<endl;
	cin>>risp;
	cout<<endl;
}

	system ("pause");
}
