#include<iostream>
#include "balon.h"

using namespace std;

int main(){
	
	cout << "Hola desde el main" << endl;
	cout << "**************************" << endl;
	
	// Instancias de la clase -> Balon
	Balon *b1 = new Balon("Rojo","Futbol",5);
	cout << "****Balon*****" << endl;
	cout << "Color del balon: "<< b1->color << endl;
	cout << "Tipo de balon: "<< b1->tipo << endl;
	cout << "Tamanio del balon: "<< b1->tamano << endl;
	
	cout << endl;

	Balon *b2 = new Balon("Verde","Voleyball",4);
	cout << "****Balon*****" << endl;
	cout << "Color del balon: "<< b2->color << endl;
	cout << "Tipo de balon: "<< b2->tipo << endl;
	cout << "Tamanio del balon: "<< b2->tamano << endl;
	
	return 0;
}

