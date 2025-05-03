#include<iostream>

using namespace std;

int main() {
	
	
	// El arreglo es un apuntador de memoria???
	/*
	Arreglo 
	Estructura de datos estatica, secuencial y homogenea
	-> Los arreglos se numeran de 0 a n-1  (Zero indexing)
	
	si el arreglo no encuentra todas las posiciones disponibles
	de forma secuencial entonces hace crash
	 // declarar arreglos
	 // forma 1: declarar arreglo sin inicializar sus valores
	*/
	int arreglo[6];
	// que valores tiene este arreglo
	for(int i = 0; i < 6; i++ )
	{
		arreglo[i] = 5 + arreglo[i];
		cout << i << ")"<<arreglo[i] <<endl;
	}
	
	cout<<"***********************************"<<endl;
	int arreglo2[5];
	
	return 3222;
}


