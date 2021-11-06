#include "cCajXP.h"
#define NMAX 5000
cCajXP::cCajXP():cCajero(NMAX)
{
	this->ContFallas = 0;
}

cCajXP::~cCajXP()
{
}

bool cCajXP::IntroTarjeta(cTarjeta* tarjeta)
{
	if (tarjeta != NULL)
	{
		cout << "Se introdujo correctamente" << endl;
		this->tarjeta = tarjeta;
		return true;
	}
	else
	{
		return false;
	}
}

cTarjeta* cCajXP::DevTarjeta()
{
	cout << "Por favor retire su tarjera" << endl;
	cTarjeta* aux = this->tarjeta;
	this->tarjeta = NULL;

	return aux;
}

void cCajXP::Extraer()
{
	if (tarjeta != NULL)
	{
		float monto = 0;
		cout << "Ingrese el monto a extraer: " << endl;
		cin >> monto;

		if (monto < tarjeta->getSaldo())
		{
			tarjeta->setSaldo(tarjeta->getSaldo() - monto);
			ContFallas++; //dsp se hace la división
		}
		else
			throw new exception("Fondos insuficientes");
	}
	return;
}

void cCajXP::CantOperaciones() const
{
	cout << "Cantidad de operaciones: " << Operaciones << endl;
	cout << "Cantidad de Fallas: " << ContFallas / 5 << endl;
	return;
}
