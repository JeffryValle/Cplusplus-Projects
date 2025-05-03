#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H

#include<iostream>
#include<stdexcept>

using namespace std;
//Clase
class CuentaAhorro{
	private: // atributos privados
		float saldo;
	public: // atributos publicos
		string cliente;
	// Constructor
	CuentaAhorro(string cliente){	
		this->cliente = cliente;
		this->saldo = 0.00;
	}
	// Metodos
	void depositar(float monto){
		if( monto > 0 ){ this->saldo = monto + saldo; } 
		else { cout<<"El saldo no puede ser negativo"; }
		cout << endl; }

	void retirar(float monto){
		if( monto < 0 ){ cout<<"El saldo no puede ser negativo"; }
		else if( monto <= saldo){	this->saldo = saldo - monto; } 
		else { cout<<"El monto no puede ser menor al saldo"; }
		cout << endl; }
		

	float getSaldo(){ return this->saldo; }
	
};

#endif
