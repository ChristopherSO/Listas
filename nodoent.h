#ifndef NODOENT_H
#define NODOENT_H

class NodoEnt
{
private:
	int valor;
	NodoEnt * anterior;
	NodoEnt * siguiente;
public:
	NodoEnt(); // Constructora
	NodoEnt(int); // Constructora
	int getValor();
	void setValor(int);
	NodoEnt getAnterior();
	void setAnterior(NodoEnt);
	NodoEnt getSiguiente();
	void setSiguiente(NodoEnt);
};

#endif // NODOENT_H
