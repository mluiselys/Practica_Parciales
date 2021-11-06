#pragma once
#include"cEnum.h"

class cPrecio
{
	float Precio;
	Tamanio tam;
public:
	cPrecio(float precio, Tamanio Tam);
	~cPrecio();

	float getPrecio() { return Precio; };
	Tamanio gettam() { return tam; };
};

