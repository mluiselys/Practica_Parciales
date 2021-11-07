#include "cPersona.h"
#include"cEsbirroMago.h"
#include"cEsbirroEspadachin.h"
#include"cElite.h"
#include"cJefe.h"
#include<time.h>

cPersona::cPersona(string Nombre)
{
	Fuerza = rand() % 100;
	Inteligencia = rand() % 100;
	PoderAtaque = rand() % 100;
	vidaActual = vidaMaxima;
	vidaMaxima= rand() % 100;
	EstadoVida = true;

}

cPersona::~cPersona()
{
}

void cPersona::Atacar(cMonstro*M)
{
	int DanoHacer = 0;
	DanoHacer = PoderAtaque + Fuerza + Inteligencia;
	M->RecibirDa�oMonstruo(DanoHacer);
	
	

}



void RecibirDa�o(cPersona* P, int Da�oBase, cMonstro* M)
{
	int da�o = 0;
	if (dynamic_cast<cEsbirroMago*>(M) != NULL) //si el mostruo es mago
	{
		da�o = Da�oBase - P->Inteligencia/2;
	}
	else if (dynamic_cast<cJefe*>(M) != NULL) //si el mostruo es un jefe
	{
		da�o = Da�oBase - P->Armadura/ 4 - P->Inteligencia/4;
	}
	else if (dynamic_cast<cEsbirroEspadachin*>(M) != NULL || dynamic_cast<cElite*>(M) != NULL) //si el monstruo es un espadachin o un elite
	{
		da�o = Da�oBase - P->Armadura;
	}
	else
		da�o = 0;
	if (da�o < 0)
		da�o = 0; //soy inmune
	P->setVida(da�o);
}

ostream& operator<<(ostream& out, cPersona* P)
{
	out << "Nombre: " << P->Nombre << endl;
	out << "\tFuerza: " << P->Fuerza << endl;
	out << "\tInteligencia: " << P->Inteligencia << endl;
	out << "\tArmadura: " << P->Armadura << endl;
	out << "\tPoder de ataque: " << P->PoderAtaque << endl;
	out << "\tVida actual: " << P->vidaActual << endl;
	return out;
}

int& operator-(cPersona& P, int da�o)
{
	P.setVida(da�o);
	return P.vidaActual;
}
