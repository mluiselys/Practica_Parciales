#include "cBanco.h"

cBanco::cBanco()
{
}

cBanco::~cBanco()
{
	delete listaCajeros;
}

void cBanco::AgregarCajero(cCajero* cajero)
{
	try
	{
		listaCajeros->Agregar(cajero);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
	}
}

cCajero* cBanco::QuitarCajero(string code)
{
	listaCajeros->Quitar(code);
}

string cBanco::to_string()
{
	
}

void cBanco::Imprimir()
{
}
