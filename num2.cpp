#include <iostream>
using namespace std;

int main()
{
    float Num;
    cout<<"Digíta un número y y verificaré sie es positivo\n";
    cout<<"Dime el numero:";
    cin>>Num;
    if(Num>=1)
    {
     cout<<"El #"<<Num<<" es positivo\n";


    }
    else
    {
        if(Num<= -1 )
        {
            cout<<" El # "<<Num<< " es negativo \n";
        }
        else
        {
            cout<<" El # es cero por ende no es positivo y tampoco es negativo\n";
        }
    }
}