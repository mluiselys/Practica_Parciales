#include "cPrecio.h"
#include<sstream>
cPrecio::cPrecio(float precio, Tamanio Tam, string code)
{
	this->code = code;
	this->Precio = precio;
	tam = Tam;
}

cPrecio::~cPrecio()
{
}

string cPrecio::to_string()
{
	stringstream ss;
	ss << "Codigo: " << code << endl;
	ss << "Precio: " << Precio << endl;
	ss <<tamanio_to_string(tam) << endl;

	return ss.str();

}

void cPrecio::imprimir()
{
	string imprimir2 = to_string();
	cout << imprimir2;
}
