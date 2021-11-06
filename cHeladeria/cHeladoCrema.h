#pragma once
#include"cHelado.h"
class cHeladoCrema: public cHelado
{
	bool Bueno;
public:
	cHeladoCrema(const string desc, const string code);
	~cHeladoCrema();

	void operator+(cHelado* otro);
	float Receta();
};

