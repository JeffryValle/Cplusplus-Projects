#ifndef COLA_H
#define COLA_H

#include "Nodo.h"
#include<iostream>

using namespace std;

class Cola{
	private:
		Nodo *first;
		Nodo *last;
		int length;
	public:		
	
		Cola(){
			this->first = NULL; // apuntador first inicializado en NULL (inicialmente apuntan hacia el primer Nodo)
			this->last = NULL; // apuntador last inicializado en NULL (inicialmente apuntan hacia el primer Nodo)
			this->length = 0;
		}
	
	Nodo *getFirst(){
		return this->first;
	}
	Nodo *getLast(){
		return this->last;
	}
	int getLength(){
		return this->length;
	}
	
	void enqueue(string value){
		Nodo *nuevo = new Nodo(value);
		if(this->length == 0){
			this->first = nuevo;
			this->last = nuevo;
		} else {
			this->last->next = nuevo;
			this->last = nuevo;
		}
		this->length++;
	}
	
	void print(){
		Nodo *tmp = this->first; 
		while( tmp != NULL){ 
			cout << tmp->value << " <- "; //cout << endl;
			tmp = tmp->next;
		}
	}

	Nodo *dequeue(){
		if(this->first != NULL){
			Nodo *extraer = this->first;
			this->first = this->first->next;
			extraer->next = NULL;
			this->length--;
			return extraer;
		}
			return NULL;
	}
	
};

#endif
