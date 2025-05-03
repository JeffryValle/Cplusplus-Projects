#ifndef NODOONE.H
#define NODOONE.H

#include<iostream>

using namespace std;

class Nodo{
	private:
	public:	//atributos
	int value;  // valor almacenado en el Nodo
	Nodo *next; // apuntador al siguiente Nodo
	//Constructor
	Nodo(int value){
		this->value = value;
		this->next = NULL; // de forma predeterminada el siguiente Nodo es NULL
	}
	
};

#endif
