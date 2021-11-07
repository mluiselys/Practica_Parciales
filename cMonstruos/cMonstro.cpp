#include "cMonstro.h"

int cMonstro::counter = 0;


void cMonstro::RecibirDañoMonstruo(int daño)
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

void RecibirDañoMonstruo(cMonstro* M, int daño)
{
	M->Vida -= daño;
}
