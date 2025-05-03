#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

void divido(float *arreglo, int tamano);
void elevar(double *arreglo2, int tamano2);
void elementos(int *arreglo3, int tamano3);

int main(){
	/*	Uso de apuntadores en arreglos, considerar: 
	1) No es posible calcular el tamaño de un arreglo desde un ambito externo.
	2) Cada elemento del arreglo es un apuntador y por lo tanto es necesario colocar
	el simbolo de asterisco cuando hacemos referencia al arreglo desde un ambito externo.
	3) Cuando colocamos un arreglo como paramentro de una funcion no se coloca los brackets(  []  ),
	4) Cuando un paramentro de una funcion es un arreglo apuntado desde el ambito de origen no se envia el simbolo
	de & porque el arreglo en si ya es un apuntador de memoria.
	*/
	
	
	int a = 5;
	cout << " El valor de a: " << a <<endl;
	cout << " El valor de a: " << &a;
	float arreglo[] = {1, 2.5, 3, 4, 10, 8.8};
	double arreglo2[] = {1, 2, 3, 4, 5, 6, 7};
	int arreglo3[] = {4,5,6,7,8,9,10,11,12};
	
	
	
	divido(arreglo, end(arreglo)-begin(arreglo));
	elevar(arreglo2, end(arreglo2)-begin(arreglo2));
	cout << endl;
	cout << "***************************************************" <<endl;	
	for(int i=0; i < end(arreglo)-begin(arreglo); i++){
		cout << arreglo[i] << endl;
	}
	cout << "***************************************************" <<endl;
	for(int i=0; i < end(arreglo2)-begin(arreglo2); i++){
		cout << arreglo2[i] << endl;
	}
	
	cout << "***************************************************" <<endl;
	for(int i=0; i < end(arreglo3)-begin(arreglo3); i++){
		cout << arreglo3[i] << endl;
	}

	elementos(arreglo3, end(arreglo3)-begin(arreglo3));
	cout << "***************************************************" <<endl;
	for(int i=0; i < end(arreglo3)-begin(arreglo3); i++){
		cout << arreglo3[i] << endl;
	}
	
	return 1999;
}
 // El arreglo es un apuntador de apuntadores.
 // Es una coleccion de apuntadores.
 // Cada elemento del arreglo es un apuntador de memoria.
void divido(float *arreglo, int tamano){
	// No se incluye '*' en esta parte.
	for(int i=0; i < tamano; i++){
		arreglo[i] = arreglo[i]/2;
	}
}

void elevar(double *arreglo2, int tamano2){
	
	for(int i=0; i < tamano2; i++){
		arreglo2[i] = pow(arreglo2[i], 2);
	}
}

void elementos(int *arreglo3, int tamano3){
	srand(time(NULL)); // srand debe ir antes o fuera de la estructura de repetición
	for(int i=0; i < tamano3; i++){
		arreglo3[i] = rand()%(99-1+1)+1;
	}
}



