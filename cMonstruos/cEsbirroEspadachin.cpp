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
	int Da�o = 0;
	Da�o = Fuerza / 10;
	RecibirDa�o(P, Da�o, this);
}
