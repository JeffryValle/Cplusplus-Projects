#include<iostream>
#include<time.h>
#include<algorithm>
#include<fstream>

using namespace std;

int main(){
	
// Ejercicio Práctico 3:

	fstream archivo;
	string cadena;
	string str;
	
	archivo.open("ejemplo_24mil.txt", ios::in);
	int cont=0;
	
	cout << "Digite una cadena de texto: ";
	getline(cin, cadena);
	str = cadena;
	
	if( archivo.is_open()) {
		string linea; //variable para leer lineas
		
		while(!archivo.eof()){
			getline(archivo, linea);
			string str2 = linea;
			transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
			transform(str.begin(), str.end(), str.begin(), ::tolower);

					if(str == str2){
						cont++;
					}

	
	}
	

		cout << " La cadena se encontro " << cont <<endl;
	
	
	}
	return 1999;
}
