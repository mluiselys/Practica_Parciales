#include "cElite.h"

cElite::cElite(const string Nombre):cMonstro(Nombre)
{
	Inteligencia = rand() % 100;
	Fuerza = rand() % 100;
	ProbabilidadGolpe = rand() % 25;
}

cElite::~cElite()
{
}

void cElite::Atacar(cPersona* P)
{
	int Dano = 0;
	if (ProbabilidadGolpe > 0) {
		Dano = 100 * (1 - exp(-(Inteligencia + Fuerza / 100));
	}
	else
	{
		Dano = 0;
		RecibirDaño(P, Dano, this);
	}
}
