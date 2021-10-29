#pragma once
#include<iostream>
#include<string>
using namespace std;
#define NMAX 30
template <class T>

class cLista
{
private:

	T** lista;
	int CA, TAM;
	static int counter; 

public:

	cLista(int TAM = NMAX);
	~cLista();

	void Agregar(T* objeto);
	void Eliminar(string clave);
	T* Quitar(string clave);
	T* Buscar(string clave);
	T* BuscarPos(string clave);
	T* getitem(int pos);
	void Listar();

	//sobrecargas
	void operator+(T* nuevo);
	void operator-(string clave);
	T* operator[](string pos);

	int getCA() { return CA; };
	

};


template<class T>

inline cLista<T>::cLista(int TAM)
{
	this->TAM = TAM;
	CA = 0;
	lista = new T * [TAM];
	for (int i = 0; i < TAM; i++)
	{
			lista[i] = NULL;
	}
}

template<class T>
inline cLista<T>::~cLista()
{
	if (lista != NULL)
	{
		for (int i = 0; i < CA; i++)
		{
			if (lista[i] != NULL)
				delete lista[i];
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
		throw new exception("No se puede agregar el elemento");
	}
}

template<class T>
inline void cLista<T>::Eliminar(string clave)
{
	T* aux = Quitar(clave);
	if (aux != NULL)
	{
		delete aux;
	}
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
inline T* cLista<T>::Buscar(string clave)
{
	int pos = BuscarPos(clave);
	if (pos < CA)
	{
		return lista[pos];
	}
}

template<class T>
inline T* cLista<T>::BuscarPos(string clave)
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
		return lista[pos];
	else return NULL;
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
	try {
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
	Eliminar(clave);
}

template<class T>
inline T* cLista<T>::operator[](string pos)
{
	return BuscarPos(pos);
}
