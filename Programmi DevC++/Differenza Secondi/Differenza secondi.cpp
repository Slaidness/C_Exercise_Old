#include <iostream>
int main()

{ 
	using namespace std;
	float o1, m1, s1, o2, m2, s2, o3, m3, s3, o4, m4, o5, s;



	//Orario maggiore
	cout<<"Inserire le ore dell'orario maggiore:             ";
	cin>> o1;
	cout<<"Inserire i minuti dell'orario maggiore:           ";
	cin>> m1;
	cout<<"Inserire i secondi dell'primo orario maggiore:    ";
	cin>> s1;
	cout<<endl;

	//Orario minore
	cout<<"Inserire le ore dell'orario minore:               ";
	cin>> o2;
	cout<<"Inserire i minuti dell'orario minore:             ";
	cin>> m2;
	cout<<"Inserire i secondi dell'orario minore:            ";
	cin>> s2;
    cout<<endl;
    
    o3=o1-o2; //Differenza ore
    m3=m1-m2; //Differenza minuti
    s3=s1-s2; //Differenza secondi
    
    o4=o3*60; //Differenza ore trasformata in minuti
    m4=m3*60; //Differenza minuti trasformata in secondi
    
    o5=o4*60; //Fifferenza ore trasformata in minuti e poi in secondi
    
    s=o5+m4+s3; //Somma delle differenze in secondl
	
    
    //Differenza Orario
    cout<<"La differenza in secondi e' di:                  " <<s<<endl;
    
    system ("PAUSE");
    return 0;

}
