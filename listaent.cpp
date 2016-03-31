#include "listaent.h"

ListaEnt::ListaEnt() {
	this->longitud = 0;
	this->cabeza = new NodoEnt();
	this->cola = new NodoEnt();
}

int ListaEnt::getLongitud() {
	return this->lingitud;
}

void ListaEnt::insertarAlInicio(int entero) {

	NodoEnt nodoNuevo = new NodoEnt(entero);

	if (this->cabeza.getSiguiente() == null) {
		this->cola.setAnterior(nodoNuevo);
	} else {
		nodoNuevo.setSiguiente(this->cabeza.getSiguiente());
		this->cabeza.getSiguiente().setAnterior(nodoNuevo);
	}

	this->cabeza.setSiguiente(nodoNuevo);
	this->lingitud++;
}

void ListaEnt::insertarAlFinal(int entero) {

	NodoEnt nodoNuevo = new NodoEnt(entero);

	if (this->cola.getAnterior() == null) {
		this->cabeza.setSiguiente(nodoNuevo);
	} else {
		nodoNuevo.setAnterior(this->cola.getAnterior());
		this->cola.getAnterior().setSiguiente(nodoNuevo);
	}

	this->cola.setAnterior(nodoNuevo);
	this->lingitud++;
}

bool ListaEnt::estaVacia() {
	if (this->lingitud == 0) {
		return true;
	} else {
		return false;
	}
}

void ListaEnt::mostrarLista() {

	NodoEnt nodoAux = this->cabeza;

	if (this->estaVacia()) {
		cout<< "La lista está vacía" << endl;
	} else {
		while (nodoAux.getSiguiente() != null) {
			nodoAux = nodoAux.getSiguiente();
			cout<< nodoAux.getValor() << endl;
		}
	}
}
