#ifndef NODO_H
#define NODO_H

#include<iostream>

using namespace std;

class Nodo{
	private:
	public:	//atributos
	string value; // valor almacenado en el Nodo
	Nodo *next; // apuntador al siguiente Nodo
	
	//Constructor
	Nodo(string value){
		this->value = value;
		this->next = NULL; // de forma predeterminada el siguiente Nodo es NULL
	}
	
};

#endif


