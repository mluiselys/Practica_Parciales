#pragma once
#include"cCajero.h"
class cCajOS: public cCajero
{
public:

	cCajOS();
	~cCajOS();

	bool IntroTarjeta(cTarjeta* tarjeta);
	void Extraer();
	cTarjeta* DevTarjeta();
	void CantOperaciones() const;

	void SoundSystem()const;
};

