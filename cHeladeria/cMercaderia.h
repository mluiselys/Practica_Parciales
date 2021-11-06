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
public:
	cMercaderia(float cantidad, cHelado* icecream);
	~cMercaderia();

	void operator+(int cantidad);
	void operator-(int cantidad);

	float getcantidad() { return Cantidad; };
	cHelado* gethelado() { return helado; };
};

