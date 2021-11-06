#include "cHeladoCrema.h"
#include"cHeladoAgua.h"
cHeladoCrema::cHeladoCrema(const string desc, const string code):cHelado(desc,code)
{
	Bueno = true;
}

cHeladoCrema::~cHeladoCrema()
{
}

void cHeladoCrema::operator+(cHelado* otro)
{
	if (dynamic_cast<cHeladoCrema*>(otro)&& dynamic_cast<cHeladoCrema*>(this))
	{
		*this + otro;
		Bueno = true;
	}
	else if (dynamic_cast<cHeladoAgua*>(otro) && dynamic_cast<cHeladoAgua*>(this))
	{
		*this + otro;
		Bueno = true;
	}
	else
	{
		throw new exception("ERROR");
		Bueno = false;
	}
	
}

float cHeladoCrema::Receta()
{
	return 0.0f;
}
