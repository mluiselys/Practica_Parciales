#include "cCajUNIX.h"
#define NMAX 5000
cCajUNIX::cCajUNIX():cCajero(NMAX)
{
	huella = false;
	fallos = 0;
}

cCajUNIX::~cCajUNIX()
{
}

bool cCajUNIX::VerificacionID()
{
	if (huella == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool cCajUNIX::IntroTarjeta(cTarjeta* tarjeta)
{
	if (tarjeta != NULL)
	{
		cout << "Se introdujo correctamente la tarjeta" << endl;
		this->tarjeta = tarjeta;
		return true;
	}
	else
	{
		fallos++;
		return false;
	}
}

cTarjeta* cCajUNIX::DevTarjeta()
{
	cTarjeta* aux = this->tarjeta;
	this->tarjeta = NULL;

	return aux;
}

void cCajUNIX::Extraer()
{
	if (VerificacionID())
	{
		if (tarjeta != NULL)
		{
			float monto = 0;
			cout << "Ingrese el monto a extraer: " << endl;
			cin >> monto;
			if (monto < tarjeta->getSaldo())
			{
				tarjeta->setSaldo(tarjeta->getSaldo() - monto);
				fallos++;
			}
			else
				throw new exception("Fondos insuficientes");
		}
		return;
	}
	throw new exception("ID incorrecto");
}

void cCajUNIX::CantOperaciones() const
{
	cout << "Cantidad de operaciones: " << Operaciones << endl;
	cout << "Cantidad de Fallas: " << fallos << endl;
	return;
}
