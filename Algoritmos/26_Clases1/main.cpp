#include<iostream>
#include "Persona.h"
#include "Carro.h"
#include "Empleado.h"
#include<stdexcept>

using namespace std;

int main(){
	
	cout << "Hola mundo" << endl;
	
	// crear un objeto de clase Persona
	Persona *p1 = new Persona();
	//colocar valores a algunos atributos de p1
	p1->nombre = "Gerardo";
	p1->genero = 'M';
	cout << "nombre de p1: " << p1->nombre << endl;
	cout << "edad de p1: " << p1->edad << endl;
	cout << "genero de p1: " << p1->genero << endl;
	cout << "estadoCivil de p1: " << p1->estadoCivil << endl;
	
	cout << "***************************************************" <<endl;
	// instanciar la clase

/*	Empleado *n2 = new Empleado("Gerardo Portillo", 'M', 15999); */
	Empleado *n3 = new Empleado("Jeffry Valle", 18, 'M', 0.00, 'T');
	n3->imprimir();
	
	
	// instancia de la clase Carro
	/*
	Carro *c1 = new Carro("Nissan","Sentra","Blanco",2012);	
	c1->imprimir();
	cout << "ecoTasa para c1: " << c1->ecoTasa() << endl;
	
	Carro *c2 = new Carro("Honda","Civic","Negro",1965);	
	c2->imprimir();
	cout << "ecoTasa para c1: " << c1->ecoTasa() << endl; 
	/*
	set:: metodo que permite modificar un atributo desde un ámbito externo
	get:: metodo que permite leer un atributo desde un ámbito externo
	*/
	
	
	
	return 1999;
}
