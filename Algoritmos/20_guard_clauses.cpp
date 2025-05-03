#include<iostream>

using namespace std;

// prototipo de funcion 
double dividir(double dividendo, double divisor);

int main(){
	// Guard clauses: sentencias usadas para seguridad de nuestro codigo
	// consisten en que si una funcion/metodo o instruccion generan
	// un error que este se lance a través de una excepción 
	//en vez de imprimir un mensaje con cout
	
	cout << dividir(5,2) << endl;
	try{
		cout << dividir(6,0) << endl;
	} catch(except &ex){
		cout << ex.what() << endl;
	}
	cout << "Adios" << endl;
	
	return 928374;
}

//implementacion

double dividir(double dividendo, double divisor){
	if( divisor == 0 ){
		throw invalid_argument("divisor de cero.");
	}
	return dividendo/divisor;
}
