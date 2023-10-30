#include <iostream>
using namespace std;
int main()
{
    int num;
    char risposta;
    num=0;
    do {
        num++;
        cout<<num<<endl;
        cout<<"vuoi visualizzare il numero progressivo (s/n)?\n";
        cin>>risposta;
        }
        while (risposta!='n');
        system("pause");
        return(0);
        }
