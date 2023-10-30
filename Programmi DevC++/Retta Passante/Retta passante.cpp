#include <iostream>
int main ()


{
	using namespace std;
	float X1, X2, Y1, Y2, c, m, Y;
	
	cout<< "Inserire l'ascissa del primo punto: "<< endl;
	cin>> X1;
	
	cout<< "Inserire l'ordinata del primo punto: "<< endl;
	cin>> Y1;
	
	cout<< "Inserire l'ascissa del secondo punto: "<< endl;
	cin>> X2;
	
	cout<< "Inserire l'ordinata del secondo punto: "<< endl;
	cin>> Y2;
	
	m = (Y2-Y1)/(X2-X1); //Calcolo coeficiente angolare
	c = Y1-(m*X1); //Calcolo costante
	
	cout<< "L'equazione della retta passante è Y= " << m << "X" << c << endl;
	
	system ("pause");
	return 0;
}
