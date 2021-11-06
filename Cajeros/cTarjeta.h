#pragma once
#include<iostream>
#include<string>
using namespace std;
class cTarjeta
{
	string NombreyApellido;
	string NumeroTrjeta;
	const string Code;
	string Clave;
	float Saldo;
public:

	cTarjeta(string nombre, string clave, float saldo);
	cTarjeta();

	string getNombre() { return NombreyApellido; };
	float getSaldo() { return Saldo; };
	string getClave() { return Clave; };
	string getCode() const { return Code; };
	void setSaldo(float num) { Saldo = num; };

	friend ostream& operator<<(ostream& out, cTarjeta& T);
};
istream& operator>>(istream& is, cTarjeta& T);
