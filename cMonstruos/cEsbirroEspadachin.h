#pragma once
#include"cMonstro.h"
class cEsbirroEspadachin: public cMonstro
{
	int Fuerza;
public:
	cEsbirroEspadachin(const string Nombre);
	~cEsbirroEspadachin();

	void Atacar(cPersona* P);
};

