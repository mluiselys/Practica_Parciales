#include "cJugador.h"

cJugador::cJugador(string nombre, const string Code): code(Code)
{
	this->Nombre = nombre;
	
}

cJugador::~cJugador()
{
	delete lista_personajes;
}

float cJugador::Calculardanototal()
{
	float total = 0.0;
	for (int i = 0; i < lista_personajes->getCA(); i++)
	{
		total = total + lista_personajes->getitem(i)->getpuntos();
		return total;
	}
}


