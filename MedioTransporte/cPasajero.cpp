#include "cPasajero.h"
int cPasajero::counter = 0;
cPasajero::cPasajero(const string code, string tipo, int edad):code(code)
{
	this->Tipo = tipo;
	counter++;
	kilometrosDestino = 0;
	contador_pasajes = 0;
	this->Edad = edad;
	dinero = 100.0;
}

cPasajero::~cPasajero()
{
}
