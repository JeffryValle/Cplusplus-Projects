#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>
using namespace std;

class Persona{
	private:
		// aqui va todo lo que es privado
	public:
		// aqui va todo lo que es publico
		// atributos publicos
		string nombre;
		int edad;
		char genero;
		char estadoCivil;
		//constructores
		//constructor sin parametros:
		Persona(){ // Es un metodo, se llama igual que la clase, no se le define tipo
				   // normalmente los atributos se recomienda inicializarlos desde el constructor
				   nombre = "no definido";
				   edad = 0;
				   genero = 'X';
				   estadoCivil = 'S';
				   			
		}
		Persona(string nombre, int edad, char genero, char estadoCivil){
			// si los parametros se llaman igual que los atributos
			// entonces al asignarlos hay que diferenciarlos usando this
			this->nombre = nombre;
		}
		
		
		
		
		
	// un constructor devuelve una direccion 
	// de memoria hacia la instancia de una clase de
	// nosotros depende si la ponemos en una variable
	// o solo la usamos en el momento que se necesite
	//cout << new Persona() << endl;
	//direccion de p1:
	//cout << "direccion de p1: " << p1 << endl;
};

#endif



