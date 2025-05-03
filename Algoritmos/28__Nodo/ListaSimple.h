#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include<iostream>
#include<stdexcept>
#include "Nodo.h"

using namespace std;

class ListaSimple{
	private:
		Nodo *first;
		Nodo *last;
		int length;
	public:

	// Constructor sin parámetros
	ListaSimple(){
		// Cuando una lista es nueva no tiene nodos
		// por lo tanto primer y ultimo Nodo apuntan a NULL
		// y la longitud es cero.
		this->first = NULL;
		this->last = NULL;
		this->length = 0;
	}
	//Metodos
	Nodo *getFirst(){
		return this->first;
	}
	Nodo *getLast(){
		return this->last;
	}
	int getLength(){
		return this->length;	
	}
	//Metodo push: agrega un nuevo Nodo al final de la lista
	void push( int value ){
		Nodo *nuevo = new Nodo(value);
		/* al hacer push se dan 2 escenarios:
		* no hay nodos
		* hay nodos  */
		if(this->length == 0){
			// no hay nodos
			this->first = nuevo;
			this->last = nuevo;
			this->length++;
			
		} else {
			// hay nodos
			// el siguiente Nodo del ultimo Nodo ahora apunta al nuevo Nodo
			this->last->next = nuevo;
			// ahora el ultimo Nodo es el nuevo Nodo
			this->last = nuevo;
			this->length++;
		}
	}
	// Método print: imprime la lista simple en una representación en consola
	void print(){
		//crear un Nodo temporal para ir recorriendo la lista
		// este Nodo inicialmente apunta a First
		Nodo *tmp = this->first;
		while( tmp != NULL){
			cout << tmp->value << " -> ";
			tmp = tmp->next;
		}
		// Final del recorrido
		cout << "NULL"<< endl;
	}
	
	//metodo get: devuelve el valor del Nodo en la posicion proporcionada
		int getNodo(int pos){
			//primero validar que la posicion sea permitida
			if( pos < 0 || pos > this->length-1 )
				throw invalid_argument("posicion no valida");
			else{
				//recorrer la estructura hasta llegar a la posicion deseada
				Nodo *tmp = this->first;
				//variable de control para contar los saltos
				int actual = 0;
				while( tmp != NULL ){
					//si el salto actual es igual a la posicion solicitada
					//entonces retornamos el valor del Nodo donde nos encontramos
					if( actual == pos )
						return tmp->value;
					
					tmp = tmp->next;
					actual++;
				}
			}
		}
		
	void set(int pos, int value){
			//primero validar que la posicion sea permitida
			if( pos < 0 || pos > this->length-1 )
				throw invalid_argument("posicion no valida");
			else{
				//recorrer la estructura hasta llegar a la posicion deseada
				Nodo *tmp = this->first;
				//variable de control para contar los saltos
				int actual = 0;
				while( tmp != NULL ){
					//si el salto actual es igual a la posicion solicitada
					//entonces reemplazamos el valor del Nodo por valor
					//proporcionado
					if( actual == pos )
						tmp->value = value;
					
					tmp = tmp->next;
					actual++;
				}
			}
			
			}
};

#endif
