#include <iostream>
using namespace std;
int main()

{
    int sec1,min1,sec2,min2,sec3,min3,temp1,temp2,temp3;
    
    cout<<"inserire i secondi del primo concorrente: ";
    cin>>sec1;
    cout<<"inserire minuti del primo concorrente: ";
    cin>>min1;
    cout<<endl;
    
    cout<<"inserire i secondi del secondo concorrente: ";
    cin>>sec2;
    cout<<"inserire i minuti del secondo concorrente: ";
    cin>>min2;
    cout<<endl;
    
    cout<<"inserire i secondi del terzo concorrente: ";
    cin>>sec3;
    cout<<"inserire i minuti del terzo concorrente: ";
    cin>>min3;
    cout<<endl;
    
    temp1=sec1+(min1*60);
    temp2=sec2+(min2*60);
    temp3=sec3+(min3*60);
    
    cout<<endl;
    cout<<"PRIMO CONCORRENTE CON IL TEMPO EQUIVALENTE IN SECONDI DI: "<<temp1<<endl;
    cout<<"SECONDO CONCORRENTE CON IL TEMPO EQUIVALENTE IN SECONDI DI: "<<temp2<<endl;
    cout<<"TERZO CONCORRENTE CON IL TEMPO EQUIVALENTE IN SECONDI DI: "<<temp3<<endl;
    cout<<endl<<endl;
    
    
    
    if (temp1>temp2){
    if (temp2>temp3){
    cout<<"posto 1: "<<temp3<<endl;
    cout<<"posto 2: "<<temp2<<endl;
    cout<<"posto 3: "<<temp1<<endl;
}
}
    if (temp1>temp3){
    if (temp3>temp2){
    cout<<"posto 1: "<<temp2<<endl;
    cout<<"posto 2: "<<temp3<<endl;
    cout<<"posto 3: "<<temp1<<endl;
}
}
    if (temp2>temp1){
    if (temp1>temp3){
    cout<<"posto 1: "<<temp3<<endl;
    cout<<"posto 2: "<<temp1<<endl;
    cout<<"posto 3: "<<temp2<<endl;
}
}
    if (temp2>temp3){
    if (temp3>temp1){
    cout<<"posto 1: "<<temp1<<endl;
    cout<<"posto 2: "<<temp3<<endl;
    cout<<"posto 3: "<<temp2<<endl;
}
}
    if (temp3>temp1){
    if (temp1>temp2){
    cout<<"posto 1: "<<temp2<<endl;
    cout<<"posto 2: "<<temp1<<endl;
    cout<<"posto 3: "<<temp3<<endl;
}
}
    if (temp3>temp2){
    if (temp2>temp1){
    cout<<"posto 1: "<<temp1<<endl;
    cout<<"posto 2: "<<temp2<<endl;
    cout<<"posto 3: "<<temp3<<endl;
}
}
cout<<endl;
system ("pause");

}




