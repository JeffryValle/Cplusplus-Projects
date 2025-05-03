#include<iostream>
#include<time.h>
#include<fstream>

using namespace std;

int main(){
	
	fstream archivo;
	
	archivo.open("ejemplo_24mil.txt", ios::in);
	
	// validar si se puede acceder al archivo
	
	if( archivo.is_open()) {
	// todo esta bien
		// mientras no llegue al final del archivo
		string linea; //variable para leer lineas
		int lineas=0; //variable acumulador o contador
		int suma=0;
		int pares=0, impares=0;
		while(!archivo.eof()){
			getline(archivo, linea); // volcar la linea leida del archivo hacia la variable
			lineas++; // sumar 1 al contador de lineas
			try {
				suma+=stoi(linea);
				if(stoi(linea)%2==0){
					pares++;
				} else {
					impares++;
				}
			} catch(exception ex) {/* no mostrar mesaje de error */}
			
		}
		cout << "El numero de lineas es: " << lineas <<endl;
		cout << "La suma de todos los numeros: " << suma <<endl;
		cout << "Numeros pares leidos: " << pares <<endl;
		cout << "Numeros impares leidos: " << impares <<endl;	
		cout << "Promedio de numeros lei+ndos : " << suma/(pares+impares) <<endl;		
		
	} else {
		cout << "No se puede leer el archivo o no existe" << endl;
	}
	
	return 123;
}
