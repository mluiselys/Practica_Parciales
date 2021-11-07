#pragma once
#include"cMonstro.h"
class cEsbirroMago: public cMonstro
{
	int inteligencia;

public:
	cEsbirroMago(const string Nombre);
	~cEsbirroMago();

	void Atacar(cPersona* P);

};

