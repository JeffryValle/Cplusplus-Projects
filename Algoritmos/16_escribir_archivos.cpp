#include<iostream>
#include<time.h>
#include<fstream>

using namespace std;

int main(){
	
	fstream archivo;
	
	archivo.open("bitacora.txt", ios::app );
	/* las operaciones de escritura son:
		ios::out	sobreescribe todo el archivo OUTPUT (overwrite)
		ios::app	inserta una nueva linea al final del archivo APPEND
	IMPORTANTE: si el archivo no existe, este se crea automaticamente.
	*/
	// validar si se pudo abrir el archivo para su escritura
	if( archivo.is_open() ){
		// escribir datos en el archivo
		archivo << "Jeffry Valle" <<endl;
		archivo << 2 + 3 <<endl;
		archivo << "\tUNAH\tSistemas\n2024" << "\tFebrero" << endl;
	} else {
		cout << "No se pudo abrir el archivo o no tiene permiso" << endl;
	}
	
	
	return 26;
}
