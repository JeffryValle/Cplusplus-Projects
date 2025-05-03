#ifndef VEHICULO.H
#define VEHICULO.H

#include<iostream>

using namespace std;

class Vehiculo{
	private: // atributos privados
		string estado;
	public: // atributos públicos
	string marca, modelo, color, placa;
	int anio;
	
	// Constructores
	
	// Constructor (5 parámetros)
	Vehiculo(string marca, string modelo, string color, int anio, string placa){
		this->marca = marca;
		this->modelo = modelo;
		this->color = color;
		this->anio = anio;
		this->placa = placa;
	}
	
	// Constructor (sin parámetros)
	Vehiculo(){
		this->marca = "Nissan";
		this->modelo = "Sentra";
		this->placa = "HND504";
		this->color = "Blanco";
		this->anio = 2006;
		this->estado = "Detenido";
	}
	
	// Métodos
	void setAcelerar(string estado){
		this->estado = estado;
	}
	void setFrenar(string estado){
		this->estado = estado;
	}
	string getEstado(){
		return this->estado;
	}
};

#endif
