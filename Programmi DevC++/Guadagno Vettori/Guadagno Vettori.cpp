#include <iostream>
#include <string.h>
using namespace std;
struct articolo
{
       string desc;
       int qta;
       float pa;
       float pv;
};
int main()
{
    struct articolo prod[100];
    float guadagno=0;
    int n;
    int i=0;
    cout<<"quanti elementi?"<<endl;
    cin>>n;
    while (i<n)
    {
          cout<<"inserire la quantita'"<<endl;
          cin>>prod[i].qta;
          cout<<"inserire la descrizione"<<endl;
          cin>>prod[i].desc;
          cout<<"inserire il prezzo di vendita"<<endl;
          cin>>prod[i].pv;
          cout<<"inserire il prezzo di acquisto"<<endl;
          cin>>prod[i].pa;
          guadagno=guadagno+prod[i].qta*(prod[i].pv-prod[i].pa);
          i++;
    }
    cout<<"il guadagno totale e':"<<guadagno<<endl;
    system ("pause");
    return (0);
}
