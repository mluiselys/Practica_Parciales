#pragma once
#include"cMonstro.h"
class cJefe: public cMonstro
{
	int Fuerza;
	int Inteligencia;
	int ProbabilidadCritica;

public:
	cJefe(const string Nombre);
	~cJefe();

	void Atacar(cPersona* P);
};

