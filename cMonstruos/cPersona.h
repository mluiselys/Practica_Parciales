#pragma once
#include<iostream>
#include<string>
#include"cMonstro.h"
using namespace std;

class cPersona
{
private:
	string Nombre;
	int Fuerza;
	int Inteligencia;
	int PoderAtaque;
	int Armadura;
	int vidaActual;
	int vidaMaxima;
	bool EstadoVida;
protected:
	friend void RecibirDaño(cPersona* P, int DañoBase, cMonstro* M);
public:
	cPersona(string Nombre);
	~cPersona();

	

	void Atacar(cMonstro*M);
	void setEstado() {
		if (vidaActual == 0)
			EstadoVida = false;
	}
	bool getEstado() { return EstadoVida; };
	void setVida(int num) {
		vidaActual = num;
	};
	friend  ostream& operator<<(ostream& out, cPersona* P);
	friend int& operator-(cPersona& P, int dano);
};

int& operator-(cPersona& P, int daño);
