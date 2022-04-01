#ifndef FRACCION_H_
#define FRACCION_H_

#include <iostream>
#include <math.h>
using namespace std;

class Fraccion {
	private:
	int num,dem;
	public:
		Fraccion ();     // constructor
        Fraccion (int _num, int _dem); // constructor
		int getnum();
		int getdem();
		void setnum(int _num);
		void setdem(int _dem);
        Fraccion sumaFracciones(Fraccion,Fraccion);
		Fraccion multiFracciones(Fraccion, Fraccion);
        void imprimeFraccion();
};
#endif