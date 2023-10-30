#include <iostream>

using namespace std;
int main ()
{
int cont, eta, menu, n, somma; 
float alt, max, min, media;

cout<<"<1> PIU' ALTO E PIU' BASSO " <<endl;
cout<<"<2> MEDIA ETA "<<endl;
cout<<"<3> EXIT "<<endl<<endl;
                
                cout<<"INSERIRE NUMERO <1-3>: ";
                cin>>menu;
                

switch (menu)

case 1:{
	

	do{
		cout<<"Inserire quantita' degli alunni: ";
        cin>>n;
        cout<<endl;
	cout<<endl;
		
	}while (n<0);
	
     cout<<"Inserire altezza alunno: ";
     cin>>alt;
     
     
     max=alt;
     min=alt;



for(cont=1; cont<n; cont++){
           
     cout<<"Inserire altezza alunno: ";
	 cin>>alt;
	 if(max<alt)
	 max=alt;
	 if(min>alt)
	 min=alt;
}

cout<<endl;
	
cout<<"L'ALUNNO PIU' ALTO E' DI:  "<<max<<endl;
cout<<"L'ALUNNO PIU' BASSO E' DI: "<<min<<endl<<endl;

break;


case 2:

somma=0;

	do{
		cout<<"Inserire quantita' degli alunni: ";
        cin>>n;
          cout<<endl;
	cout<<endl;
		
	}while (n<0);
		
		for(cont=0; cont<n; cont++){
			cout<<"Inserire eta dell'alunno: ";
			cin>>eta;
			
			somma=somma+eta;
		}
		media=somma/n;
		  cout<<endl;
	cout<<endl;
		cout<<"L'ETA' MEDIA DELLA CLASSE E' DI: "<<media;
		  cout<<endl;
	cout<<endl;
break;


case 3:

  cout<<endl;
	cout<<endl;
	cout<<"Arrivederci!";
	break;
	


default:

cout<<endl<<endl;
	cout<<"ERRORE";
	
	break;}

	


system ("pause");
}


                             
