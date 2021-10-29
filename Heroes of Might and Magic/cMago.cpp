#include "cMago.h"
#include"cCuernodeMinotauro.h"
#include"cPatasdeRana.h"
#include"cOjodeAmalur.h"

cMago::cMago(string nombre, string code):cPersonaje(nombre,code)
{
	inteligencia = 0;
	area = 0;
}

cMago::~cMago()
{
}

void cMago::Consumir(cObjetoMagico* objeto)
{
	cCuernodeMinotauro* cuerno = dynamic_cast<cCuernodeMinotauro*>(objeto);
	cPatasdeRana* patas = dynamic_cast<cPatasdeRana*>(objeto);
	cOjodeAmalur* ojos = dynamic_cast<cOjodeAmalur*>(objeto);

	if (cuerno != NULL)
	{
		poder++;
	}
	if (patas != NULL)
	{
		inteligencia++;
	}
	if (ojos != NULL)
	{
		area++;
	}
}
