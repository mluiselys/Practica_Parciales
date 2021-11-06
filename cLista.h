#pragma once
#include<iostream>
using namespace std;
#define NMAX 20
template<class T>
class cLista
{
	T** lista;
	int CA, TAM;

public:
	cLista(int TAM = NMAX);
	~cLista();

	void Agregar(T* objeto);
	void Elimina(string clave);
	int BuscarPos(string clave);
	T* Buscar(string clave);
	T* Quitar(string clave);
	T* getitem(int pos);

	


};

template<class T>
inline cLista<T>::cLista(int TAM)
{
	lista = new T * [TAM];
	for (int i = 0; i < TAM; i++)
	{
		lista[i] = NULL;
	}
	CA = 0;
	this->TAM = TAM;
}

template<class T>
inline cLista<T>::~cLista()
{
	if (lista != NULL)
	{
		for (int i = 0; i < CA; i++)
		{
			if (lista[i] != NULL)
			{
				delete lista[i];
			}
		}
		delete[] lista;
	}
}

template<class T>
inline void cLista<T>::Agregar(T* objeto)
{
	if (CA < TAM)
	{
		lista[CA++] = objeto;
	}
	else
	{
		throw new exception("No se puede Agregar a la lista");
	}
}

template<class T>
inline void cLista<T>::Elimina(string clave)
{
	T* aux = Quitar(clave);
	if (aux != NULL)
	{
		delete aux;
	}
}

template<class T>
inline int cLista<T>::BuscarPos(string clave)
{
	for (int i = 0; i < CA; i++)
	{
		if (lista[i]->getID() == clave)
		{
			return i;
		}
	}
	return TAM;
}

template<class T>
inline T* cLista<T>::Buscar(string clave)
{

	int Pos = BuscarPos(clave);
	
	if (pos < CA)
	{
		return lista[pos];
	}
	return TAM;
}

template<class T>
inline T* cLista<T>::Quitar(string clave)
{
	T* aux = Buscar(clave);
	if (aux != NULL)
	{
		int i = BuscarPos(clave);
		for (int k = i; k < CA - 1; k++)
		{
			lista[k] = lista[k + 1];
		}
		lista[CA--] = NULL;
	}
	return aux;
}

template<class T>
inline T* cLista<T>::getitem(int pos)
{
	if (pos < CA)
	{
		return lista[pos];
	}
	else
	{
		return NULL;
	}
}


