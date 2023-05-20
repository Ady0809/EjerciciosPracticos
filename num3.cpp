#include <iostream>
using namespace std;

int main()
{
int num;
long double factorial;
cout<<" Te damos una cordial bienvenida\n";
cout<<"Digíta un número: ";
cin>> num;
factorial=1;
for(int i=1;i<=num;i++)
{
    factorial = factorial * i;
}
cout<<" El factorial de " << num << " es " << factorial <<endl;
}