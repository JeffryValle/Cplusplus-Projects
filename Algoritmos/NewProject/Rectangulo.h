#ifndef RECTANGULO_H
#define RECTANGULO_H

#include<iostream>
#include<cmath>

using namespace std;

class Rectangulo{
	private:
	public: 
		float ancho, largo;
		
	Rectangulo(){
		this->ancho = 0.00;
		this->largo = 0.00;
	}
	Rectangulo(float ancho, float largo){
		this->ancho = ancho;
		this->largo = largo;
		void area();
		void perimetro();
		void diagonal();
	}
	void area(){
		float a;
		a = ancho*largo;
		cout<< "El area del rectangulo es: "<<a;
	}
	void perimetro(){
		float p;
		p=ancho*2 + largo*2;
		cout<< "El perimetro del rectangulo es: "<<p;
	}
	void diagonal(){
		float diago;
		diago = sqrt(pow(ancho,2)+pow(largo,2));
		cout<< "La diagonal del rectangulo es: "<<diago;
	}
};

#endif
