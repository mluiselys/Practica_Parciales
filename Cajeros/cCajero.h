#pragma once
#include"cTarjeta.h"

class cCajero
{
protected:
	const int ID;
	static int counter;
	float Saldo;
	int Operaciones;
	cTarjeta* tarjeta;

public:
	cCajero(const int id, float Saldo, cTarjeta* Card);
	cCajero(int Saldo);
	virtual ~cCajero();

	virtual bool IntroTarjeta(cTarjeta* tarjeta) = 0;
	virtual void Extraer() = 0;
	virtual cTarjeta* DevTarjeta() = 0;
	virtual void CantOperaciones() const = 0;

	cTarjeta* Menu(cTarjeta* tarjeta);
	void ConsultarSaldo() const;
	void Depositar();

	static int getContador() { return counter; };
	int getID() { return ID; };
	float getSaldo() { return Saldo; };
};

