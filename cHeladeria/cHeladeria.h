#pragma once
#include"cLista.h"
#include"cMercaderia.h"
#include"cPrecio.h"
#include"cHelado.h"
#include"cEnum.h"

class cHeladeria
{
private:
	float Caja;
	cLista<cMercaderia>* listaMercaderia = new cLista<cMercaderia>(10);
	cLista<cPrecio>* listaPrecio = new cLista<cPrecio>(6);

public:
	cHeladeria();
	~cHeladeria();

	void Vender(cHelado* sabor, Tamanio tam);
	void VenderMixto(cHelado* sabor1, Tamanio tam1, cHelado* sabor2, Tamanio tam2);
	cHelado* Fabricar(cHelado* sabor, int cantidad);
	void ListarMercaderia();
	void ListarPrecios();
	void ListarCaja();

	cLista<cMercaderia>* getlista() { return listaMercaderia; }
	cLista<cPrecio>* getlista2() { return listaPrecio; }
	float getCaja() { return Caja; };
	void setCaja(float num) { Caja = num; }
};

