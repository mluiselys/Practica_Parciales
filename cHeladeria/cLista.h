#pragma once
#include<iostream>
using namespace std;
#define NMAX 20
template<class T>
class cLista
{

	T** lista;
	int CA, TAM;
	bool Eliminar;
public:
	cLista(int TAM = NMAX);
	~cLista();

	void Agregar(T* objeto);
	void Elimina(string clave);
	T* Buscar(string clave);
	T* Quitar(string clave);
	int BuscaPos(string clave);
	T* getitem(int pos);
	void Listar();

	void operator+(T* nuevo);
	void operator-(string clave);
	int getCA() { return CA; };
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
	Eliminar = false;
}

template<class T>
inline cLista<T>::~cLista()
{
	if (lista != NULL && Eliminar == true)
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
		throw new exception("No se puede agregar");
	}
}

template<class T>
inline void cLista<T>::Elimina(string clave)
{
	T* aux = Quitar(clave);

	if (aux != NULL) {
		delete aux;
	}
}

template<class T>
inline T* cLista<T>::Buscar(string clave)
{
	int pos = BuscaPos(clave);
	if (pos < CA)
	{
		return lista[pos];
	}
}

template<class T>
inline T* cLista<T>::Quitar(string clave)
{
	T* aux = Buscar(clave);
	if (aux != NULL)
	{
		int i = BuscaPos(clave);
		for (int k = i; k < CA - 1; k++)
		{
			lista[k] = lista[k + 1];
		}
		lista[CA--] = NULL;
	}
	return aux;
}

template<class T>
inline int cLista<T>::BuscaPos(string clave)
{
	for (int i = 0; i < CA; i++)
	{
		if (lista[i]->getcode() == clave)
		{
			return i;

		}
	}
	return TAM;
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

template<class T>
inline void cLista<T>::Listar()
{
	for (int i = 0; i < CA; i++)
	{
		cout << lista[i];
	}
}

template<class T>
inline void cLista<T>::operator+(T* nuevo)
{
	try
	{
		Agregar(nuevo);
	}
	catch (exception* ex)
	{
		cout << ex->what() << endl;
		delete ex;
	}
}

template<class T>
inline void cLista<T>::operator-(string clave)
{
	Elimina(clave);
}
