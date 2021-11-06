#pragma once
#include"cCajero.h"

class cCajUNIX:public cCajero
{
	bool huella;
	int fallos;

public:

	cCajUNIX();
	~cCajUNIX();

	bool VerificacionID();
	bool IntroTarjeta(cTarjeta* tarjeta);
	cTarjeta* DevTarjeta();
	void Extraer();
	void CantOperaciones() const;
};

