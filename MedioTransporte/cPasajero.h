#pragma once
#include<string>
#include<iostream>
using namespace std;

class cPasajero
{
	const string code;
	string Tipo;
	int Edad;
	int contador_pasajes;
	int kilometrosDestino;
	float dinero;
	static int counter;

public:
	cPasajero(const string code, string tipo, int edad);
	~cPasajero();

	string getcode() { return code; };
	string gettipo() { return Tipo; };
	int getedad() { return Edad; };
	float getdinero() { return dinero; };
	int getcontadorpasajes() { return contador_pasajes; };
	int getkilometros() { return kilometrosDestino; };

};

