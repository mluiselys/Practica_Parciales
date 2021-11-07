#include "cEsbirroEspadachin.h"

cEsbirroEspadachin::cEsbirroEspadachin(const string Nombre):cMonstro(Nombre)
{
	Fuerza = rand() % 100;
}

cEsbirroEspadachin::~cEsbirroEspadachin()
{
}

void cEsbirroEspadachin::Atacar(cPersona* P)
{
	int Daño = 0;
	Daño = Fuerza / 10;
	RecibirDaño(P, Daño, this);
}
