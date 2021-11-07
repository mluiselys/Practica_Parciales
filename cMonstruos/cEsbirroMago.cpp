#include "cEsbirroMago.h"

cEsbirroMago::cEsbirroMago(const string Nombre):cMonstro(Nombre)
{
	inteligencia = rand() % 100;
}

cEsbirroMago::~cEsbirroMago()
{
}

void cEsbirroMago::Atacar(cPersona* P)
{
	int DanoHacer = 0;
	DanoHacer =  + 50 * (1 - exp(-inteligencia / 100));
	

}
