#pragma once
#include"cMonstro.h"
class cElite: public cMonstro
{
	int Inteligencia;
	int Fuerza;
	int ProbabilidadGolpe;

public:
	cElite(const string Nombre);
	~cElite();

	void Atacar(cPersona* P);
};

