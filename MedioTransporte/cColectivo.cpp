#include "cColectivo.h"

cColectivo::cColectivo(string nombre, int Linea, int Ramal): cMedioTransporte(nombre)
{
	this->linea = Linea;
	this->ramal = Ramal;
}

cColectivo::~cColectivo()
{
}

void cColectivo::pagodeViaje()
{
	float sum = 0.0;
	for (int i = 0; i < listaPasajeros->getCA(); i++)
	{
		if (listaPasajeros->getitem(i)->getkilometros() > 0 && listaPasajeros->getitem(i)->getkilometros() < 5)
		{
			sum = listaPasajeros->getitem(i)->getdinero() - 5;
			dineroDiario = 5;
			setCaja(getCaja() + getdienro());
		}
		else if (listaPasajeros->getitem(i)->getkilometros() > 5 && listaPasajeros->getitem(i)->getkilometros() < 7) {
			sum = listaPasajeros->getitem(i)->getdinero() - 7;
			dineroDiario = 7;
			setCaja(getCaja() + getdienro());
		}
		else if (listaPasajeros->getitem(i)->getkilometros() > 10 && listaPasajeros->getitem(i)->getkilometros() < 20) {
			sum = listaPasajeros->getitem(i)->getdinero() - 10;
			dineroDiario = 10;
			setCaja(getdienro() + getCaja());
		}
	}
}

