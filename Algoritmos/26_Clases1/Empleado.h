#ifndef EMPLEADO_H
#define EMPLEADO_H

#include<iostream>
#include<stdexcept>

using namespace std;

class Empleado{
	private:
		int edad;
		char genero;
		float salario;
		char contrato;
	public:
		string nombre;

	//Constructores
		/* si los parametros se llaman igual que los atributos
		entonces al asignarlos hay que diferenciarlos usando this
		*/
	//Constructor con cinco parametros
	Empleado(string nombre, int edad, char genero, float salario, char contrato){
		this->nombre = nombre;
		this->edad = edad;
		this->genero = genero;
		this->salario = salario;
		this->setEdad(edad);
	}
	// metodos
	void imprimir(){
	cout << "**********EMPLEADO*********" <<endl;
	cout << "Nombre: " << this->nombre << endl;
	cout << "Edad: " << this->edad << endl;
	cout << "Genero: " << this->genero << endl;
	cout << "Salario: " << this->salario << endl;
	cout << "Contrato: " << this->contrato << endl;
	}
	void setEdad(int edad){
		if(edad >=18 && edad<=70){
			this->edad = edad;
		} else {
			throw invalid_argument("La edad debe ser mayor o igual 18 y menor o igual 70");
		}
		if(genero == 'M' || genero == 'F'){
			this->genero;
		}
	}
	int getEdad(){
		return this->edad;
	}

};


#endif
