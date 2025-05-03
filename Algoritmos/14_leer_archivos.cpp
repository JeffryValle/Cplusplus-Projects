#include<iostream>
#include<time.h>
#include<fstream>

using namespace std;

int main(){
	
	// Lectura de un archivo de texto
	fstream archivo; // Estructura de datos para leer archivos
	
	// tratar de abrir el archivo en modo de lectura (ios::in)
	archivo.open("ejemplo_24mil.txt", ios::in ); 
	
	// Validar si se pudo abrir el archivo
	if( archivo.is_open() ){
		cout << "Archivo abierto correctamente " << endl;
		string linea;
		string contenido;
		int cont=0, cont2=0, cont3=0, entero;
		// mientras no lleguemos al final del archivo ( end of file )
		while( !archivo.eof() ){
			getline(archivo, linea); // Leer linea por linea
			cont++;	
			}
			cout << contenido << endl;
			int valor;
			
			cout << "Se ha recorrido el archivo" << endl;
			cout << "Se imprimieron : " << cont << " lineas"<<endl;
			archivo.close(); // cerrar el archivo (buena práctica)
			
			cout << " El total de numeros pares es: " << cont2 << endl;
			cout << " El total de numeros impares es: " << cont3 << endl;			
		
	} else {
		cout << "Archivo no se pudo leer o no existe " << endl;
	}
	
	
	
	return 0606;
}
