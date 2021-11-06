#pragma once
#include"cEnums.h"

class cPrecio
{
	float Precio;
	Tamanio tam;
	string code;
public:
	cPrecio(float precio, Tamanio Tam, string code);
	~cPrecio();

	float getPrecio() { return Precio; };
	string getcode() {return code;};
	Tamanio gettam() { return tam; };

	string to_string();
	void imprimir();
};

