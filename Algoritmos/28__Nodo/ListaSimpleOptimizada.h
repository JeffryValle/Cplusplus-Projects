#ifndef LISTASIMPLEOPTIMIZADA_H
#define LISTASIMPLEOPTIMIZADA_H

#include<iostream>
#include<stdexcept>
#include "Nodo.h"

using namespace std;

class ListaSimpleOptimizada{
	private:
		Nodo *first;
		Nodo *last;
		int length;
	public:

	// Constructor sin parámetros
	ListaSimpleOptimizada(){
		this->first = NULL; 
		this->last = NULL; 
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
	void push( string value ){
		Nodo *nuevo = new Nodo(value); 
		if(this->length == 0){
			this->first = nuevo;
			this->last = nuevo;
			this->length++;
		} else { 
			this->last->next = nuevo;
			this->last = nuevo;
			this->length++;
		}
	}
	void print(){
		Nodo *tmp = this->first;
		int i=1;
		while( tmp != NULL){ 
			cout << "\t" << i <<") " << tmp->value << endl;
			tmp = tmp->next; 
			i++;
		}
	}
	
	Nodo *getNodo(int pos){
					if( pos < 0 || pos > this->length-1 )
				throw invalid_argument("posicion no valida");
			else{
				Nodo *tmp = this->first;
				int actual = 0;
				while( tmp != NULL ){ 
					if( actual == pos ) 
						return tmp;
					tmp = tmp->next;
					actual++;
				}
			}
	}
	string get(int pos){ 
		return this->getNodo(pos-1)->value;
	}
	void set(int pos, string value){
		this->getNodo(pos)->value = value;
	}
	Nodo *pop(int pos){
		Nodo *eliminar = this->getNodo(pos-1);  
		if ( eliminar == this->first ){
			this->first = this->first->next;
		}else {
			Nodo *anterior = this->getNodo(pos-2);
			anterior->next = eliminar->next;
			if( eliminar == this->last){
				this->last = anterior;
			}
		}
		eliminar->next = NULL;
		this->length--;
		return eliminar;
	}
	
	int find(string value){

		Nodo *tmp = this->first; 
		int pos=0 ;
		while( tmp != NULL){ 
			if(tmp->value == value){
				return pos; 
			}
			tmp = tmp->next;
			pos++; 
		} 
		return -1;
	}
};

#endif
