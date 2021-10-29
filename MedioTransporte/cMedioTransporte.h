#pragma once
#include<iostream>
#include"cPasajero.h"
#include"cLista.h"
#include<string>
using namespace std;

class cMedioTransporte
{
protected:
	string Nombre;
	float Caja;
	float dineroDiario;
	cLista<cPasajero>* listaPasajeros = new cLista<cPasajero>(10);
public:
	cMedioTransporte(string nombre);
	virtual ~cMedioTransporte();

	void RecaudarDinero(); //asegurar que no queden pasajeros
	void PagarBoleto(cPasajero* pasajero);
	float getCaja() { return Caja; };
	void setCaja(float num) { Caja = num; }
	float getdienro() { return dineroDiario; };
	void setdinero(float num) { dineroDiario = num; }

};

