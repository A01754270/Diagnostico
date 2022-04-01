#include <iostream>
#include "Fraccion.h"

using namespace std;

Fraccion::Fraccion()
{
	num = 1;
	dem= 2;
}

Fraccion::Fraccion (int _num, int _dem)
{
	num= _num;
	dem=_dem;
}
int Fraccion::getnum()
{
	return num;
}

int Fraccion::getdem()
{
	return dem;
}

void Fraccion::setnum(int _num)
{
  num = _num;	
}

void Fraccion::setdem(int _dem)
{
	dem = _dem;
}

Fraccion Fraccion::sumaFracciones(Fraccion f1, Fraccion f2)
{
	Fraccion resultado;
	resultado.setnum(f1.getnum()*f2.getdem()+f2.getnum()*f1.getdem());
	resultado.setdem(f1.getdem()*f2.getdem());
	return resultado;
}
Fraccion Fraccion::multiFracciones(Fraccion f1, Fraccion f2)
{
	Fraccion resultado;
	resultado.setnum(f1.getnum()*f2.getnum());
	resultado.setdem(f1.getdem()*f2.getdem());
	return resultado;
}
void Fraccion::imprimeFraccion()
{
	cout<<getnum()<<"/"<<getdem()<<endl;
}