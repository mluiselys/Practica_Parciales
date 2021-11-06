#include "cHeladoAgua.h"
#include"cHeladoCrema.h"
cHeladoAgua::cHeladoAgua(const string desc, const string code):cHelado(desc,code)
{
	Calidad = true;
}

cHeladoAgua::~cHeladoAgua()
{
}

void cHeladoAgua::operator+(cHelado* otro)
{
	if (dynamic_cast<cHeladoCrema*>(otro) && dynamic_cast<cHeladoCrema*>(this))
	{
		*this + otro;
		Calidad = true;
	}
	else if (dynamic_cast<cHeladoAgua*>(otro) && dynamic_cast<cHeladoAgua*>(this))
	{
		*this + otro;
		Calidad = true;
	}
	else
	{
		throw new exception("ERROR");
		Calidad = false;
	}
}

float cHeladoAgua::Receta()
{
	return 0.0f;
}
