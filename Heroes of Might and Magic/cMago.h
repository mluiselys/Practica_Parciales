#pragma once
#include"cPersonaje.h"
class cMago: public cPersonaje
{
private:
	int inteligencia;
	int area;
public:
	cMago(string nombre, string code);
	~cMago();
	  
	void Consumir(cObjetoMagico* objeto);
};

