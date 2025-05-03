#include "Cola.h"
#include<iostream>
#include<stdexcept>

// Jeffry Espinal Valle --- 20212000761 --- Algoritmos y Estructura de Datos

using namespace std;

int main(){
	
	Cola *c1 = new Cola();
	int op;
	string paciente;

	do{
		system("cls");
	cout << " ========== CONSULTORIO DR. MATASANO ==========" << endl;
	cout << " 1) Ingresar paciente a la fila "<<endl;
	cout << " 2) Atender paciente "<<endl;
	cout << " 3) Imprimir la fila"<<endl;
	cout << " 4) Salir "<<endl;
	cout << " SELECCIONE UNA OPCION: ";
	cin>>op;
		cout<<endl;
		switch(op){
			case 1:  // Ingresar paciente a la fila
				cout << "	Por favor digite el nombre del paciente: ";
				cin>>paciente;
				c1->enqueue(paciente);
				cout << "	Paciente - "<< paciente << " - Ingresado Existosamente" <<endl;
				cout << endl;	
			break;
			
			case 2:  // Atender paciente
				if(c1->getLength() == 0){ throw invalid_argument(" YA NO HAY MAS PACIENTES ");}
				else{cout << "	Atendiento a: " << c1->dequeue()->value <<endl;}
				cout << "	Paciente atendido" <<endl;
				cout << endl;
			break;
			
			case 3:	 // Imprimir cola 
				if(c1->getLength() == 0){ throw invalid_argument(" NO HAY PACIENTES EN LA FILA ");}
				else {
					cout << "	Imprimiendo cola...porfavor espere...." << endl;
					c1->print();
					cout << endl;
				}
				cout << endl;
			break;
			
			case 4:
			break;
			default: 
				cout << " ---CERRANDO CONSULTORIO--- " << endl;
		}
		system("pause");
	} while(op!=4);{ }
	return 123;
}
