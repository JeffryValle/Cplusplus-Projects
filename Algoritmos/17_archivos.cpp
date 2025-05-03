#include<iostream>
#include<time.h>
#include<fstream>

using namespace std;

int main(){
	
	fstream archivo;
	
	archivo.open("DIARIO.txt", ios::app );
	string texto;
	char resp;
	
	cout<< "**************************************** Bienvenido al Diario ************************************************"<<endl;
	cout << endl;
	
	if( archivo.is_open() ){
		// escribir datos en el archivo
		cout << "Desea agregar entrada al Diario? Si[s], No[n]" <<endl;
		cin >> resp;
		while(resp == 's'){
			system("cls");
			cout << endl;
				cout << "Entrada al Diario: " << endl;
				cin >> texto;	
			cout << "Desea seguir agregando entradas? Si[s], No[n]" <<endl;
			cin >> resp;
			resp = resp;
		}
		
		cout << "Diario cerrado " << endl;
	} else {
		cout << "No se abrio correctamente " <<endl;
	}
		string linea;
		while(!archivo.eof()){
			getline(archivo, linea); // volcar la linea leida del archivo hacia la variable

		cout << linea << endl;		
		}
	
	return 0;
}





