#ifndef PILA_H
#define PILA_H

#include<iostream>
#include<stdexcept>
#include "Nodo.h"

using namespace std;

class Pila{
	private: //atributos privados
		Nodo *top;
		int length;
	public: // atributos públicos

	Pila(){
		this->top = NULL;
		this->length = 0;
	}	
	// Metodos
	Nodo *getTop(){
		return this->top; 
	}
	int getLength() {
		return this->length;
	}
	
	void push(string value){ 
		Nodo *nuevo = new Nodo(value);
	//	nuevo->value;
		nuevo->next = this->top;
		this->top = nuevo;
		this->length++;
	}
	Nodo *pop(){ /*******************/
		Nodo *extraer = this->top;
		this->top = this->top->next;
		if(extraer == NULL) {
			throw invalid_argument("No hay NODOS en la PILA ");
		}
		extraer->next = NULL;
		length--;
		return extraer;
	}
	void print(){
		Nodo *tmp = this->top; 
		int i=1;
		while( tmp != NULL){ 
			cout << i << ") " <<tmp->value << endl; 
			tmp = tmp->next;
			i++;
		}
	}
};

#endif
