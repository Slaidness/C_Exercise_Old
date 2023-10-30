#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    fstream file1;
    int num;
    int tot=0;
    file1.open("numeri.txt",ios::in);
    file1>>num;
    while (! file1.eof())
    {
          tot=tot+num;
          file1>>num;
    }
    cout<<"totale="<<tot<<endl;
    file1.close();
    system("pause");
    return(0);
}     
