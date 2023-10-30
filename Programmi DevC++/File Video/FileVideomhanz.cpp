#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int scelta;
do
{
system("cls");
cout<<"Menu' dei file: "<<endl;
cout<<"1. Operazione di lettura "<<endl;
cout<<"2. Operazione di scrittura"<<endl;
cout<<"Scelta "<<endl;
cin>>scelta;
switch (scelta)
{
case 1:
{
string riga;
ifstream input ("Lista.txt");
if(!input)
{
cout<<"Errore nell'apertura del file"<<endl;
}
else
{
while(input>>riga)
cout<<riga<<endl;
}
break;
}
case 2:
{
string nome;
ofstream output ("Lista.txt", ios::app);
if (!output)
{
cout<<"Errore nell'apertura del file"<<endl;
}
else
{
cout<<"inserisci un nome ";
cin>>nome;
output<<nome<<endl;
}
break;
}
}
system("pause");
}while(true);
}
