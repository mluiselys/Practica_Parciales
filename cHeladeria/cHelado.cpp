#include "cHelado.h"
int cHelado::contadorSabores = 0;
cHelado::cHelado(const string description, const string code): Descripcion(description),Code(code)
{
	Costo_base = 20;
	contadorSabores++;
}

cHelado::~cHelado()
{
}

ostream& cHelado::operator<<(ostream out)
{
	out << "CostoBase: " << Costo_base << endl;
	out << "Descripcion: " << Descripcion << endl;
	out << "contador de sabores: " << contadorSabores << endl;
	return out;
}


