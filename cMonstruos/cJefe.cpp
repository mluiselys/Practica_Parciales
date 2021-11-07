#include "cJefe.h"

cJefe::cJefe(const string Nombre):cMonstro(Nombre)
{
    Ataque = rand() % 100;
    Fuerza = rand() % 100;
    Inteligencia = rand() % 100;
}

cJefe::~cJefe()
{
}

void cJefe::Atacar(cPersona* P)
{
    int Da�o_a_hacer = Ataque + Fuerza / 5 + Inteligencia / 5;

    RecibirDa�o(P, Da�o_a_hacer, this);

    ProbabilidadCritica++;
}
