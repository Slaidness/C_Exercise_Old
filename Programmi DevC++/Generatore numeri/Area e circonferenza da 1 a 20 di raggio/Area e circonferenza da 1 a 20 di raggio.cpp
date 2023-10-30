#include <iostream>

using namespace std;
int main()
{
	float area, c;
	const float p=3.14;
	int cont, r;
	
	//Formule area=(r*r)*p 
	//Formule c=r*(p*2)
 
	cout<<"Questo programma ti dice l'area e la circonferenza con raggio a partire da 1 a 20"<<endl<<endl;
	
	
	for(r=1; r<=20; r++)
	{

		area=(r*r)*p;
		c=r*(p*2);
		
		cout<<"MISURE CON RAGGIO EQUIVALENTE A "<<r<<endl;
		cout<<"AREA = "<<area<<endl;
		cout<<"CIRCONFERENZA = "<<c<<endl<<endl;
		
		
		
	}
	
	
	
	system("pause");
}
