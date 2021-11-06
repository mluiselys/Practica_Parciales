#pragma once
#include"cHelado.h"
#include<iostream>
#include<string>
using namespace std;

class cMercaderia
{
private:
	float Cantidad;
	cHelado* helado;
	string code;
public:
	cMercaderia(float cantidad, cHelado* icecream,string code);
	~cMercaderia();

	void operator+(int cantidad);
	void operator-(int cantidad);

	float getcantidad() { return Cantidad; };
	string getcode() {return code;};
	cHelado* gethelado() { return helado; };

	string to_string();
	void imprimir();
};

