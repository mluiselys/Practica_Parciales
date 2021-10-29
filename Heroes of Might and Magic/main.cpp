#include"cJugador.h"
#include"cLista.h"
#include"cObjetoMagico.h"
#include"cArquero.h"
#include"cCaballero.h"
#include"cCuernodeMinotauro.h"
#include"cMago.h"
#include"cPatasdeRana.h"
#include"cOjodeAmalur.h"
#include"cPersonaje.h"

int main()
{
	cJugador* jugador1 = new cJugador("Luiselys Medina", "000");
	cJugador* jugador2 = new cJugador("Laura Medina", "001");

	cPersonaje* personaje1 = new cMago("dombuldore", "002");
	cPersonaje* personaje2 = new cMago("snape", "003");

	cObjetoMagico* objeto = new cOjodeAmalur();
	cObjetoMagico* objeto2 = new cCuernodeMinotauro();


	try {
		jugador1->getLista()->Agregar(personaje1);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
		delete ex;
	}

	try {
		jugador2->getLista()->Agregar(personaje2);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
		delete ex;
	}

	personaje1->Consumir(objeto2);
	personaje2->Consumir(objeto);

	jugador1->Calculardanototal();
	jugador2->Calculardanototal();

	delete objeto2;
	delete objeto;
	delete personaje2;
	delete personaje1;
	delete jugador2;
	delete jugador1;
	
	return 0;
}