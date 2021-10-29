#pragma once
#include<iostream>
#include"cObjetoMagico.h"
#include<string>
using namespace std;

class cPersonaje
{
protected:
	string Nombre;
	string code;
	int puntos;
	int puntosdeVida;
	int poder;
public:
	cPersonaje(string nombre, string code);
	virtual ~cPersonaje();

	virtual void Consumir(cObjetoMagico* objeto)=0;

	string getnombre() { return Nombre; };
	string getCode() { return code; };
	int getpuntos() { return puntos; };
	int getpuntosdevida() { return puntosdeVida; };
	void setpuntosdevida(int vida) { puntosdeVida = vida; }

};
istream& operator>>(istream& in, cPersonaje& obj);
ostream& operator<<(ostream& out, cPersonaje& obj);
