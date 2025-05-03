#ifndef BALON_H
#define BALON_H

#include<iostream>

using namespace std;

class Balon {
	// Atributos de tipo privado
	private:
	// Atributos de tipo publico
	public:
		string color;
		string tipo;
		int tamano;
		
	// Constructor
	Balon(string color, string tipo, int tamano){
		// Se usa 'this' para diferenciar los parametros del constructor con los
		// atributos declarados al header de la clase.
		this->color = color;
		this->tipo = tipo;
		this->tamano = tamano;
	}	
	// metodos
	
	
	
	
};

#endif
