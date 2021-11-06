#include "cMercaderia.h"
#include<sstream>
cMercaderia::cMercaderia(float cantidad, cHelado* icecream, string code)
{
	this->Cantidad = cantidad;
	this->code = code;
	this->helado = icecream;
}

cMercaderia::~cMercaderia()
{
}

void cMercaderia::operator+(int cantidad)
{
	
}

void cMercaderia::operator-(int cantidad)
{
}

string cMercaderia::to_string()
{
	stringstream ss;
	ss << "Cantidad: " << Cantidad << endl;
	cout<<helado << endl;
	ss << "Code: " << code << endl;

	return ss.str();
}

void cMercaderia::imprimir()
{
	string imprimir2 = to_string();
	cout << imprimir2;
}
