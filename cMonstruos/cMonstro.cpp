#include "cMonstro.h"

int cMonstro::counter = 0;


void cMonstro::RecibirDa�oMonstruo(int da�o)
{
}

cMonstro::cMonstro(const string Nombre):Nombre(Nombre)
{
	counter++;
}

cMonstro::~cMonstro()
{
	counter--;
}

void RecibirDa�oMonstruo(cMonstro* M, int da�o)
{
	M->Vida -= da�o;
}
