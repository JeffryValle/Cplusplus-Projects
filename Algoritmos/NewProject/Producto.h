#ifndef PRODUCTO_H
#define PRODUCTO_H

#include<iostream>
#include<stdexcept>

using namespace std;

class Producto{
	private:
		int existencias;
	public:
		string nombre, codigo;
		float costo_compra, precio_venta;
	
	//Constructores
	Producto(string nombre, string codigo, float costo_compra, float precio_venta){
		this->nombre = nombre;
		this->codigo = codigo;
		this->costo_compra = costo_compra;
		this->precio_venta = precio_venta;
		this->existencias = 0;
		this->ingresar(existencias);
	}
	Producto(){
		this->nombre = nombre;
		this->codigo = codigo;
		this->costo_compra = costo_compra;
		this->precio_venta = precio_venta;
		this->existencias = 0;
		this->ingresar(existencias);
	}
	// Metodos
	void ingresar(int cant){
		if(cant >= 0)
		{ this->existencias = cant + existencias;	}
		else { throw invalid_argument("No se permite ingresar numeros negativos");	}
	}
	void retirar(int cant){
		if(cant <= existencias)
		{ this->existencias = existencias - cant;	}
		else { throw invalid_argument("La cantidad solicitada excede la cantidad en existencia");	}
	}
	int consultar(){
		return this->existencias;
	}
};


#endif
