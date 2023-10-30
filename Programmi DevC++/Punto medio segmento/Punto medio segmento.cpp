#include <iostream>

int main(int argc, char *argv[]) 


{ 

using namespace std;
float x1; 
float y1; 
float x2; 
float y2; 
float xm; 
float ym; 
cout<<"Inserisci qui la cordinata x del primo punto: "; 
cin>> x1; 
cout<<"Inserisci qui la cordinata y del primo punto: "; 
cin>> y1; 
cout<<"Inserisci qui la cordinata x del secondo punto: "; 
cin>> x2; 
cout<<"Inserisci qui la cordinata y del secondo punto: "; 
cin>> y2; 
//calcola il punto medio 
xm = (x1+x2)/2;//calcola la media 
ym = (y1+y2)/2;//calcola la media 
cout<< "La coordinata media x fra il primo e il secondo punto e': M("<< xm <<","<< ym <<").\n"; 
system("PAUSE"); 

}
