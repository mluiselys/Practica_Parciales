#pragma once
#include"cPersona.h"
using namespace std;
class cMonstro
{
protected:
	static int counter;
	int Vida;
	int Ataque;
	const string Nombre;
	bool EstadoVida;

	friend void RecibirDañoMonstruo(cMonstro* M, int daño);
public:
	void RecibirDañoMonstruo(int daño);
	cMonstro(const string Nombre);
	virtual ~cMonstro();

	virtual void Atacar(cPersona* P)=0;

	void setVida()
	{
		if (Vida == 0)
			EstadoVida = false;
	}
	bool getVida() { return EstadoVida; };

	int getAtaque() { return Ataque; };


};

