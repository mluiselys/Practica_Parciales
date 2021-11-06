#pragma once
#include"cHelado.h"
class cHeladoAgua:public cHelado
{
	bool Calidad;
public:
	cHeladoAgua(const string desc, const string code);
	~cHeladoAgua();

	void operator+(cHelado* otro);
	float Receta();

};

