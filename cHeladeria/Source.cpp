#include"cHeladeria.h"
#include"cMercaderia.h"
#include"cPrecio.h"
#include"cHelado.h"
#include"cHeladoAgua.h"
#include"cHeladoCrema.h"
#include"cLista.h"

int main()
{
	//genero mi heladeria
	cHeladeria* Heladeria = new cHeladeria();

	//Helados
	cHelado* Mantecado = new cHeladoAgua("Vainilla con agua", "000");
	cHelado* Fresa = new cHeladoCrema("Frutilla con leche","001");
	cHelado* Chocolate = new cHeladoCrema("oreo con leche", "003");
	cHelado* RonPasas = new cHeladoCrema("Ron con pasas", "004");

	//Precios
	cPrecio* precio1 = new cPrecio(30.0, Tamanio::vaso);
	cPrecio* precio2 = new cPrecio(40.0, Tamanio::medio);
	cPrecio* precio3 = new cPrecio(50.0, Tamanio::cucurucho);
	cPrecio* precio4 = new cPrecio(60.0, Tamanio::cuarto);
	cPrecio* precio5 = new cPrecio(70.0, Tamanio::gordito);
	cPrecio* precio6 = new cPrecio(80.0, Tamanio::kilo);

	//Mercaderia
	cMercaderia* mercaderia = new cMercaderia(10.0, Mantecado);
	cMercaderia* mercaderia2 = new cMercaderia(20.0, Fresa);
	cMercaderia* mercaderia3 = new cMercaderia(25.0, Chocolate);
	cMercaderia* mercaderia4 = new cMercaderia(30.0, RonPasas);

	//Tratamos de agregar las mercaderia a la lista
	try {
		Heladeria->getlista()->Agregar(mercaderia);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
	}
	try {
		Heladeria->getlista()->Agregar(mercaderia2);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
	}
	try {
		Heladeria->getlista()->Agregar(mercaderia3);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
	}
	try {
		Heladeria->getlista()->Agregar(mercaderia4);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
	}

	//agregamos a la lista de precios
	try {
		Heladeria->getlista2()->Agregar(precio1);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
	}
	try {
		Heladeria->getlista2()->Agregar(precio2);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
	}
	try {
		Heladeria->getlista2()->Agregar(precio3);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
	}
	try {
		Heladeria->getlista2()->Agregar(precio4);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
	}
	try {
		Heladeria->getlista2()->Agregar(precio5);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
	}
	try {
		Heladeria->getlista2()->Agregar(precio6);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
	}

	//--------------------------------------------------------//
	
	Heladeria->Vender(Fresa, Tamanio::vaso);
	

	Heladeria->VenderMixto(RonPasas, Tamanio::vaso, Chocolate, Tamanio::vaso);

	Heladeria->Vender(Mantecado, Tamanio::gordito);


	try
	{
		Mantecado->operator+(Fresa);
	}
	catch(exception* ex)
	{
		cout << ex->what() << endl;
	}

	try
	{
		RonPasas->operator+(Chocolate);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
	}

	cout << Mantecado;
	cout << Fresa;

	Heladeria->ListarPrecios();
	Heladeria->ListarMercaderia();
	Heladeria->ListarCaja();

	delete mercaderia4;
	delete mercaderia3;
	delete mercaderia2;
	delete mercaderia4;

	delete precio6;
	delete precio5;
	delete precio4;
	delete precio3;
	delete precio2;
	delete precio1;

	delete RonPasas;
	delete Chocolate;
	delete Fresa;
	delete Mantecado;

	delete Heladeria;
	return 0;
}