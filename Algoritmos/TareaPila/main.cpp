#include "Pila.h"
#include<iostream>
#include<stdexcept>

using namespace std;

int main(){
	
	
	Pila *contenedor1 = new Pila();
	Pila *contenedor2 = new Pila();
	Pila *contenedor3 = new Pila();
	
	contenedor1->push("Concreto");
	contenedor1->push("Ladrillos");
	contenedor1->push("Vidrio");
	contenedor1->push("Tabla Yeso");
	contenedor1->push("Acero");
	contenedor1->push("Aluminio");
	contenedor1->push("Arena");
	contenedor1->push("Cemento");
	contenedor1->push("Canaletas");
	contenedor1->push("Tornillos");
	contenedor1->push("Varillas");
	contenedor1->push("Tubos");
	contenedor1->push("Paneles");
	
	
	int op;
	while(op!=7){
	system("cls");
	cout<< "*************BIENVENIDO A RECTEX *************"<<endl;
	cout<< "************* Contenedor 1 *************"<<endl;
	contenedor1->print();
	cout<< "************* Contenedor 2 *************"<<endl;
	contenedor2->print();
	cout<< "************* Contenedor 3 *************"<<endl;
	contenedor3->print();
	

	cout << "********************** Menu de Opciones **********************"<<endl;
	cout << "1) Ingresar productos de Contenedor 1 al Contenedor 2 "<<endl; 
	cout << "2) Ingresar productos de Contenedor 1 al Contenedor 3 "<<endl; 
	cout << "3) Ingresar productos de Contenedor 2 al Contenedor 3 "<<endl; 
	cout << "4) Ingresar productos de Contenedor 2 al Contenedor 1 "<<endl; 
	cout << "5) Ingresar productos de Contenedor 3 al Contenedor 1 "<<endl;
	cout << "6) Ingresar productos de Contenedor 3 al Contenedoor 2 "<<endl;  
	cout << "7) SALIR DE TIENDA "<<endl;
	cout << "Ingrese una opcion: ";
	cin>>op;
	cout<<endl;
	if(op == 1){  // mete del 1 al 2
		if(contenedor1->getLength() == 0){
			throw invalid_argument(" No hay materiales en el primer contenedor ");
		} else { contenedor2->push( contenedor1->pop()->value ); }
	}
	if(op == 2){  // mete del 1 al 3
		if(contenedor1->getLength() == 0){
			throw invalid_argument(" No hay materiales en el primer contenedor ");
		} else { contenedor3->push( contenedor1->pop()->value ); } 
	} 
	if(op == 3){   // mete del 2 al 3
		if(contenedor2->getLength() == 0){
			throw invalid_argument(" No hay materiales en el segundo contenedor ");
		} else { contenedor3->push( contenedor2->pop()->value ); } 
	}
	if(op == 4){  // mete del 2 al 1
		if(contenedor2->getLength() == 0){
			throw invalid_argument(" No hay materiales en el segundo contenedor ");
		} else { contenedor1->push( contenedor2->pop()->value ); }
	} 
	if(op == 5){  // mete del 3 al 1
		if(contenedor3->getLength() == 0){
			throw invalid_argument(" No hay materiales en el tercer contenedor ");
		} else { contenedor1->push( contenedor3->pop()->value ); }
	} 
	if(op == 6){  // mete del 3 al 2
		if(contenedor3->getLength() == 0){
			throw invalid_argument(" No hay materiales en el tercer contenedor ");
		} else { contenedor2->push( contenedor3->pop()->value ); }
	} 
	if(op == 7){ cout << " CERRANDO PROGRAMA "; }
	}	
}
