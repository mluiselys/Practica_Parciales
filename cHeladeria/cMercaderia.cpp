#include "cMercaderia.h"

cMercaderia::cMercaderia(float cantidad, cHelado* icecream)
{
	this->Cantidad = cantidad;
	this->helado = icecream;
}

cMercaderia::~cMercaderia()
{
}

void cMercaderia::operator+(int cantidad)
{
	
}

void cMercaderia::operator-(int cantidad)
{
}
