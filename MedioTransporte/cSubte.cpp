#include "cSubte.h"

cSubte::cSubte(string nombre):cMedioTransporte(nombre)
{
}

cSubte::~cSubte()
{
}

void cSubte::Pagar()
{
	float sum = 0.0;
	for (int i = 0; i < listaPasajeros->getCA(); i++)
	{
		if (listaPasajeros->getitem(i)->getcontadorpasajes() == 25)
		{
			sum = listaPasajeros->getitem(i)->getdinero() - 4;
			setCaja(getCaja() + sum);
		}
		else if (listaPasajeros->getitem(i)->getcontadorpasajes()>=25) {
			sum = listaPasajeros->getitem(i)->getdinero() - 2;
			setCaja(getCaja() + sum);
		}
	}
}
