#ifndef TANQUE_H
#define TANQUE_H

#include<iostream>
#include<stdexcept>

using namespace std;

class Tanque{
	private:
	 	float actual;
	public:
		float max;
		string fabricante, material;


	//  Constructores
	Tanque(float actual, float max, string fabricante, string material){
		this->actual = 0.00;
		this->max = 5000;
		this->fabricante = fabricante;
		this->material = material;
	}
	
	Tanque(){
		this->actual = 0;
		this->max = 5000;
		this->fabricante = fabricante;
		this->material = material;
	}
	
	// Metodos
	void setAgregar(float cantX){
		if(cantX > 0 && actual < max){
			this->actual = cantX + actual;
		} else {
			throw invalid_argument("No se debe exceder de la cantidad maxima");
		}
	}
	
		void setQuitar(float cantX){
		if(cantX > 0 && cantX < actual){
			this->actual = actual - cantX;
		} else {
			throw invalid_argument("No se puede retirar dicha cantidad");
		}
	}
	

	float getCantidadAgua(){
		return this->actual;
	}
	
};

#endif
