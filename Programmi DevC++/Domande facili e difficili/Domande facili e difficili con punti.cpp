#include <iostream>
using namespace std;

int main()

{
    
int num, somma, cont;

char risposta;

cout<<"inserire numero delle domande: ";
cin>>num;

somma=0;
cont=1;

while (cont<=num){

      
      cout<<"tipo domanda (f=facile  d=difficile) "<<endl; 
      cin>>risposta;
      
      if(risposta=='f')
      {
      cout<<"risposta (c=corretta  s=scorretta) "<<endl;
      cin>>risposta;
      
      if(risposta=='c')
      somma=somma+2;
      else if (risposta=='s')
      somma=somma-4;
      }
      
       else if(risposta=='d')
       {               
      cout<<"risposta (c=corretta  s=scorretta) "<<endl;
      cin>>risposta;
      
      if(risposta=='c')
      somma=somma+4;
      else if (risposta=='s')
      somma=somma-2;
      }
            cont++;
      }
cout<<"hai totalizzato "<<somma<<" punti"<<endl;
system ("pause");
}
      

      
