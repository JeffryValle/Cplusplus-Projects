#include<iostream>
#include<time.h>

using namespace std;

int main(){
	// Generar un número al azar
	//Inicializar el generador de numeros aleatorios
	srand(time(NULL));
	
	//obtener un numero al azar entre 5 y 65
	// (maximo - minimo + 1) + minimo
	
	int numero;
	numero = rand()%(65-5+1)+5;
	cout << numero << endl;
	
	for(int i=1; i<=25; i++){
		numero = rand()%(23-12+1)+12;
		cout << numero << endl;
	}
	
	cout<<"******************"<<endl;
	
	int arreglo[50];
	
	for(int x=1; x<51; x++){
		arreglo[x]  = rand()%(90-10+1)+10;
		cout<<x<<" = "<<arreglo[x]<<endl;
	}
	
	return 777;
}
