#include "cCajOS.h"
#define NMAX 5000
cCajOS::cCajOS():cCajero(NMAX)
{

}
cCajOS::~cCajOS()
{
}

bool cCajOS::IntroTarjeta(cTarjeta* tarjeta)
{
	if (tarjeta != NULL)
	{
		cout << "Se introdujo correctamnete" << endl;
		SoundSystem();
		this->tarjeta = tarjeta;
		return true;
	}
	else
	{
		return false;
	}
}

void cCajOS::Extraer()
{
	if (tarjeta != NULL)
	{
		float monto = 0;
		cout << "Ingrese el monto a extraer: " << endl;
		cin >> monto;
		if (monto < tarjeta->getSaldo())
			tarjeta->setSaldo(tarjeta->getSaldo() - monto);
		else
			throw new exception("Fondos insuficientes");
	}
	return;
}

cTarjeta* cCajOS::DevTarjeta()
{
	cTarjeta* aux = this->tarjeta;
	this->tarjeta = NULL;

	return aux;
}

void cCajOS::CantOperaciones() const
{
	system("color E4");
	cout << "Cantidad de operaciones: " << Operaciones << endl;
}

void cCajOS::SoundSystem() const
{
	cout << "PEEEEEEEEEE\n" << endl;
}
