#include"cPersona.h"
#include"cMonstro.h"
#include"cEsbirroEspadachin.h"
#include"cEsbirroMago.h"
#include"cJefe.h"
#include"cElite.h"
int main()
{

	cPersona* P1 = new cPersona("Luiselys");

	cMonstro* M1 = new cEsbirroMago();
	
	do {
		P1->Atacar(M1);
		M1->Atacar(P1);
	} while (P1->getEstado() == true);


	delete M1;
	delete P1;

	return 0;
}