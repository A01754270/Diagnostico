#include <iostream>
#include "Fraccion.h"

using namespace std;

int main()
{
    int N = 2;
    Fraccion fracciones[N];
    
    int num, dem;
    Fraccion f;
    cout<<"Teclea "<<N<<" fracciones"<<endl;
    for(int i=0; i<N;i++)
    {
        cout<<"Numerador fracción: "<<i+1 <<": ";
        cin>>num;
        fracciones[i].setnum(num);
        cout<<"Denominador fracción "<<i+1 <<": ";
        cin>>dem;
        while (dem == 0)
        {
            cout<<"Denominador fracción "<<i+1 <<": ";
            cin>>dem;
            cout<<"Error"<<endl;
        }
        fracciones[i].setdem(dem);
     }
     f= f.sumaFracciones(fracciones[0], fracciones[1]);
     f.imprimeFraccion();
     return 0;
}