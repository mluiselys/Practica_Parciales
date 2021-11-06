#include "cHeladeria.h"
#include"cHeladoAgua.h"
#include"cHeladoCrema.h"

cHeladeria::cHeladeria()
{
	Caja = 500;
}

cHeladeria::~cHeladeria()
{
	delete listaMercaderia;
	delete listaPrecio;
}

void cHeladeria::Vender(cHelado* sabor, Tamanio tam)
{
	float total = 0.0;
	for (int i = 0; i < listaPrecio->getCA(); i++)
	{
		if (listaPrecio->getitem(i)->gettam() == tam)
		{
			total = Caja += listaPrecio->getitem(i)->getPrecio();
			setCaja(total);
			Fabricar(sabor, 1);
		}
	}
}

void cHeladeria::VenderMixto(cHelado* sabor1, Tamanio tam1, cHelado* sabor2, Tamanio tam2)
{


}

cHelado* cHeladeria::Fabricar(cHelado* sabor, int cantidad)
{
	
	for (int i = 0; i < listaMercaderia->getCA(); i++)
	{
		if (dynamic_cast<cHeladoAgua*>(sabor)) {
			listaMercaderia->getitem(i)->operator+(cantidad);
			listaMercaderia->getitem(i)->gethelado()->setContador();
			setCaja(listaMercaderia->getitem(i)->gethelado()->getPrecioBase());
		}
		if (dynamic_cast<cHeladoCrema*>(sabor)) {
			listaMercaderia->getitem(i)->operator+(cantidad);
			listaMercaderia->getitem(i)->gethelado()->setContador();
			setCaja( listaMercaderia->getitem(i)->gethelado()->getPrecioBase());
		}
	}
}

void cHeladeria::ListarMercaderia()
{
	cout << "Mercaderia: " << endl;
	listaMercaderia->Listar();
}

void cHeladeria::ListarPrecios()
{
	cout << "Precios: " << endl;
	listaPrecio->Listar();
	
}

void cHeladeria::ListarCaja()
{
	cout << "Plata en la caja: " <<Caja<< endl;

}
