#include"cBanco.h"
#include"cCajero.h"
#include"cCajOS.h"
#include"cCajUNIX.h"
#include"cCajXP.h"
#include"cLista.h"
#include"cTarjeta.h"

int main()
{
	cBanco* Banco = new cBanco();

	cTarjeta* T1 = new cTarjeta("Luiselys Medina", "000", 100.0);
	cTarjeta* T2 = new cTarjeta("Laura Medina", "001", 200.0);

	cCajero* C1 = new cCajXP();
	cCajero* C2 = new cCajUNIX();
	cCajero* C3 = new cCajOS();

	Banco->AgregarCajero(C1);
	Banco->AgregarCajero(C2);
	Banco->AgregarCajero(C3);

	Banco->geLista()[0].getitem(0)->Menu(T1);
	Banco->geLista()[1].getitem(1)->Menu(T2);
	
	
	delete C3;
	delete C2; 
	delete C1;

	delete T2;
	delete T1;
	
	delete Banco;
	return 0;
}