#include "cPersonaje.h"

cPersonaje::cPersonaje(string nombre, string code)
{
	this->Nombre = nombre;
	this->code = code;
	puntos = rand()%100;
	poder = 0;
	puntosdeVida = 5;
}

cPersonaje::~cPersonaje()
{
}

istream& operator>>(istream& in, cPersonaje& obj)
{
	int vida = 0;
	cout << "ingrese puntos de vida: "<< endl;
	in >> vida;
	obj.setpuntosdevida(vida);

	return in;
}

ostream& operator<<(ostream& out, cPersonaje& obj)
{
	out << "Nombre: " << obj.getnombre() << "Codigo: " << obj.getCode() << "Puntos: " << obj.getpuntos() << endl;



	return out;
}
