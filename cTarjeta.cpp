#include "cTarjeta.h"

cTarjeta::cTarjeta(string nombre, string clave, float saldo)
{
	this->NombreyApellido = nombre;
	this->Clave = clave;
	this->Saldo = saldo;
}

cTarjeta::cTarjeta()
{

}


istream& operator>>(istream& is, cTarjeta& T)
{
	float Saldo=0.0;
	cout << "ingrese su nuevo slado: " << endl;
	is >> Saldo;
	T.setSaldo(Saldo);

	return is;
}

ostream& operator<<(ostream& out, cTarjeta& T)
{
	out << "Nombre del usuario: " << T.NombreyApellido << endl;
	out << "NumeroTarjeta: " << T.NumeroTrjeta << endl;
	out << "Code: " <<T.Code << endl;
	out << "Clave: " << T.Clave << endl;
	out << "Saldo: " << T.Saldo << endl;


	return out;
}


