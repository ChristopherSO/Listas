#include "nodoent.h"

NodoEnt::NodoEnt(int entero) {
	this->setValor(entero);
}

int NodoEnt::getValor() {
	return this->valor;
}

void NodoEnt::setValor(int entero) {
	this->valor = entero;
}

NodoEnt NodoEnt::getAnterior() {
	return this->anterior;
}

void NodoEnt::setAnterior(NodoEnt nodo) {
	this->anterior = nodo;
}

NodoEnt NodoEnt::getSiguiente() {
	return this->siguiente;
}

void NodoEnt::setSiguiente(NodoEnt nodo) {
	this->siguiente = nodo;
}
