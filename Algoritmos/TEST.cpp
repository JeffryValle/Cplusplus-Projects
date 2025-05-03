#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	fstream archivo;

	
	archivo.open("TEXTO.txt", ios::in);
	
	string linea;
	string texto;
	
	if(archivo.is_open()){
	
		while(getline(archivo,linea)){
			texto = texto + linea + "\n";
		}
		cout << texto << endl;
}
		
	return 1999;
}
