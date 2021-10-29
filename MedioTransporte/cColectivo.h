#pragma once
#include"cMedioTransporte.h"

class cColectivo: public cMedioTransporte
{
	int linea;
	int ramal;
public:
	cColectivo(string nombre, int Linea, int Ramal);
	~cColectivo();
	
	void pagodeViaje();
};

