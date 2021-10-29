#include"cColectivo.h"
#include"cLista.h"
#include"cMedioTransporte.h"
#include"cPasajero.h"
#include"cSubte.h"

int  main()
{
	//Creo los pasajeros
	cPasajero* P1 = new cPasajero("Luiselys", "NINO", 2);
	cPasajero* P2 = new cPasajero("Giovanni", "Adulto", 16);

	//creo medios de transportes
	cMedioTransporte* subte1 = new cSubte("Sarmiento");
	cMedioTransporte* Colectivo = new cColectivo("Arenales", 23, 34);

	subte1->PagarBoleto(P1);
	Colectivo->PagarBoleto(P2);

	subte1->RecaudarDinero();
	Colectivo->RecaudarDinero();



	delete Colectivo;
	delete subte1;
	delete P2;
	delete P1;
	return 0;
}