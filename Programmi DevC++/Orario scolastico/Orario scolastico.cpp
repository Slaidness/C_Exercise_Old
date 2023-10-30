#include <iostream>
#include <string>
using namespace std;
int main()

{
int sett;

   cout<<"\t\t\t\t ORARIO SCOLASTICO"<<endl<<endl;
   
   cout<<"Inserire il numero del giorno per vedere gli orari:"<<endl<<endl;
   cout<<"1. LUNEDI"<<endl;
   cout<<"2. MARTEDI"<<endl;
   cout<<"3. MERCOLEDI"<<endl;
   cout<<"4. GIOVEDI"<<endl;
   cout<<"5. VENERDI"<<endl;
   cout<<"6. SABATO"<<endl;
   cout<<"7. DOMENICA"<<endl<<endl;
   
   cout<<"8. ESCI"<<endl<<endl;
   
   cout<<"INSERIRE NUMERO < 1-8 >: ";
   cin>>sett;
   cout<<endl<<endl;

switch (sett) 

{   
case 1:
cout<<"\t\t\t\t ORARIO LUNEDI \n";
cout<<"<07:50> ED. FISICA \n";
cout<<"<08:50> INGLESE  \n";
cout<<"<09:50> TELECOMUNICAZIONI \n";
cout<<"<10:50> ITALIANO \n";
cout<<"<11:50> ITALIANO \n";
cout<<"<12:50> INFORMATICA LAB. \n";
break;
   	
case 2:
cout<<"\t\t\t\t ORARIO MARTEDI \n";
cout<<"<07:50> ED. FISICA \n";
cout<<"<08:50> TELECOMUNICAZION \n";
cout<<"<09:50> INGLESE \n";
cout<<"<10:50> INFORMATICA LAB \n";
cout<<"<11:50> INFOTMATICA LAB \n";
cout<<"<12:50> MATEMATICA \n";
break;

case 3:
cout<<"\t\t\t\t ORARIO MERCOLEDI \n";
cout<<"<07:50> SISTEMI E RETI LAB. \n";
cout<<"<08:50> SISTEMI E RETI LAB. \n";
cout<<"<09:50> INFORMATICA \n";
cout<<"<10:50> ITALIANO \n";
cout<<"<11:50> ITALIANO \n";
cout<<"<12:50> TPSIT \n";
cout<<"<13:50> RELIGIONE \n";
break;   		

case 4:
cout<<"\t\t\t\t ORARIO GIOVEDI \n";
cout<<"<07:50> STORIA \n";
cout<<"<08:50> STORIA \n";
cout<<"<09:50> MATEMATICA \n";
cout<<"<10:50> INGLESE \n";
cout<<"<11:50> INFORMATICA \n";
cout<<"<12:50> SISTEMI E RETI \n";
cout<<"<13:50> TPSIT \n";
break;

case 5:
cout<<"\t\t\t\t ORARIO VENERDI \n";
cout<<"<07:50> SISTEMI E RETI \n";
cout<<"<08:50> MATEMATICA \n";
cout<<"<09:50> MATEMATICA \n";
cout<<"<10:50> INFORMATICA \n";
cout<<"<11:50> TPSIT LAB \n";
cout<<"<12:50> TELECOMUNICAZIONI \n";
break;
 
case 6:
cout<<"Sabato e' giorno libero."<<endl<<endl;
break;

case 7:
cout<<"Domenica e' giorno libero. BUFU!"<<endl<<endl;
break;

case 8:
cout<<"Ciao, arrivederci!"<<endl<<endl;
break;

default:
cout<<"ERRORE"<<endl<<endl;
break;

}
  
   system ("pause");
   return (0);   	
}
