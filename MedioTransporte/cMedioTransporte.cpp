#include "cMedioTransporte.h"

cMedioTransporte::cMedioTransporte(string nombre)
{
	this->Nombre = nombre;
	Caja = 0.0;
	dineroDiario = 0.0;
}

cMedioTransporte::~cMedioTransporte()
{
}

void cMedioTransporte::RecaudarDinero()
{
	for (int i = 0; i < listaPasajeros->getCA(); i++)
	{
		cout << "Dinero recaudado: " << Caja << endl;
	}
}

void cMedioTransporte::PagarBoleto(cPasajero* pasajero)
{
	float dinero = 0.0;
	for (int i = 0; i < listaPasajeros->getCA(); i++)
	{
		if (listaPasajeros->getitem(i)->gettipo() == pasajero->gettipo() && pasajero->getedad() < 3)
		{
			try {
				listaPasajeros[i].Agregar(pasajero);
			}
			catch (exception* ex)
			{
				cout << ex->what() << endl;
			}
		}
		else if (listaPasajeros->getitem(i)->gettipo() == pasajero->gettipo() && pasajero->getedad() >= 4 && pasajero->getedad() <= 12)
		{
			try {
				listaPasajeros[i].Agregar(pasajero);
			}
			catch (exception* ex)
			{
				cout << ex->what() << endl;
			}
			dinero = listaPasajeros->getitem(i)->getdinero()-20.0;
			setCaja(dinero);
		}
		else if (listaPasajeros->getitem(i)->gettipo() == pasajero->gettipo() && pasajero->getedad() >= 13 && pasajero->getedad() <= 17) {
			try {
				listaPasajeros[i].Agregar(pasajero);
			}
			catch (exception* ex)
			{
				cout << ex->what() << endl;
			}
			dinero = listaPasajeros->getitem(i)->getdinero() - 30.0;
			setCaja(dinero);
		}
		else if (listaPasajeros->getitem(i)->gettipo() == pasajero->gettipo() && pasajero->getedad() > 65)
		{
			try {
				listaPasajeros[i].Agregar(pasajero);
			}
			catch (exception* ex)
			{
				cout << ex->what() << endl;
			}
			dinero = listaPasajeros->getitem(i)->getdinero() - 40.0;
			setCaja(dinero);
		}
	}
}
