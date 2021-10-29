#pragma once
#include"cMedioTransporte.h"

class cSubte: public cMedioTransporte
{
public:
	cSubte(string nombre);
	~cSubte();

	void Pagar();
};

