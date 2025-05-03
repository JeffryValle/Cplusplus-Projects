#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	
	//Buscar un string dentro de otro string
	string str = "esto es una cadena bonita llena de texto bonito y tiene mucho texto, texto y mas texto, todo bonito.";
	string buscar;
	cout << "Cadena a buscar: ";
	getline(cin,buscar);
	int posicion = str.find(buscar, 0); 
	
	int cont=-1, n=0;
	while( cont!=0){
		posicion = str.find(buscar, posicion+1);
		cont=posicion;
		cont++;
		n++;
	}
	
	if(n>1){
		cout << "Se ha encontrado: "<< n << " veces." << endl;	
	} else {
		cout << "No se encontro" << endl;
	}
	
	cout << endl;
	return 111;	
}
