#ifndef LISTAENTEROS_H
#define LISTAENTEROS_H

#include "nodoent.h"

class ListaEnt
{
private:
	int lingitud;
	NodoEnt cabeza;
	NodoEnt cola;
public:
	ListaEnt(); // Constructora
	int getLongitud();
	void insertarAlInicio(int);
	void insertarAlFinal(int);
	bool estaVacia();
	void mostrarLista();
};

#endif // LISTAENTEROS_H
