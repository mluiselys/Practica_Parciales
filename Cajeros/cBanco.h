#pragma once
#include"cLista.h"
#include"cCajero.h"
#include<string>
using namespace std;
class cBanco
{
	cLista<cCajero>* listaCajeros = new cLista<cCajero>(5);

public:
	cBanco();
	~cBanco();

	void AgregarCajero(cCajero* cajero);
	cCajero* QuitarCajero(string code);

	cLista<cCajero>* geLista() { return listaCajeros; };

	string to_string();
	void Imprimir();
};

