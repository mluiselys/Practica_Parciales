#pragma once
#include"cLista.h"
#include"cPersonaje.h"
class cJugador
{
private:
	string Nombre;
	const string code;
	cLista<cPersonaje>* lista_personajes = new cLista<cPersonaje>(10);

public:
	cJugador(string nombre, const string code);
	~cJugador();

	float Calculardanototal();

	string getNombre() { return Nombre; };
	string getcode() const { return code; };
	cLista<cPersonaje>* getLista() { return lista_personajes; }
};
