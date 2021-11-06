#pragma once
#include<iostream>
#include<string>
using namespace std;

class cHelado
{
protected:
	float Costo_base;
	const string Code;
	const string Descripcion;
	static int contadorSabores;
public:
	cHelado(const string description, const string code);
	virtual ~cHelado();
	
	virtual void operator+(cHelado* otro) = 0;
	virtual float Receta() = 0;

	float getPrecioBase() { return Costo_base; };
	string getcode() { return Code; };
	string getDescripcion() { return Descripcion; };
	int getcontador() { return contadorSabores; };
	void setContador() { contadorSabores++; };
	ostream& operator<<(ostream out);
	
};

