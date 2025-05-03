#include "Vehiculo.h"
#include "Producto.h"
#include "Rectangulo.h"
#include "Tanque.h"

#include<iostream>


using namespace std;

int main(){
	
	cout<< "**********************************"<<endl;
	cout<< "*******Jeffry Espinal Valle*******"<<endl;
	cout<< "********** 20212000761 ***********"<<endl;
	cout<< "**********************************"<<endl;
	cout<<endl;
	
	
// Clase Vehiculo
/*	int op;	
	
	Vehiculo *v0 = new Vehiculo("Mitsubishi", "Lancer", "Rojo", 2010, "HPN 9696");
	cout << "Marca del vehiculo: " << v0->marca <<endl;
	cout << "Modelo del vehiculo: " << v0->modelo <<endl;
	cout << "Color del vehiculo: " << v0->color <<endl;
	cout << "Anio del vehiculo: " << v0->anio <<endl;
	cout << "Placa del vehiculo: " << v0->anio <<endl;
	cout<<endl;
	
	Vehiculo *v1 = new Vehiculo();
	cout << "Marca del vehiculo: " << v1->marca <<endl;
	cout << "Modelo del vehiculo: " << v1->modelo <<endl;
	cout << "Color del vehiculo: " << v1->color <<endl;
	cout << "Placa del vehiculo: " << v1->placa <<endl;
	cout << "Anio del vehiculo: " << v1->anio <<endl;
	cout<<endl;
	do{
		system("cls");
		cout<< "1) Consultar estado del vehiculo "<<endl;
		cout<< "2) Acelerar "<<endl;
		cout<< "3) Frenar "<<endl;	
		cout<< "4) Salir "<<endl;
		cout<< " Seleccione una opcion: ";
		cin>>op;	
		cout<<endl;
		switch(op){
			case 1:
				cout << "Estado del vehiculo: " << v1->getEstado();
				break;
			case 2:
				v1->setAcelerar("En marcha");
				cout << "Vehiculo en : " << v1->getEstado();
				break;
			case 3:
				v1->setFrenar("Detenido");
				cout << "Vehiculo : " << v1->getEstado();
				break;
			default: 
				cout<<"Vehiculo apagado";
		}
		cout<<endl;
		cout<<endl;
		system("pause");
	}while(op != 4);{
		
	}*/
	
	
// Clase Producto
/*	int op2;
	Producto *p1 = new Producto("Camiseta", "0001-01-0001", 50, 100);
	cout<<"Nombre de producto :"<<p1->nombre <<endl;
	cout<<"Codigo de producto :"<<p1->codigo <<endl;
	cout<<"Costo de producto :"<<p1->costo_compra <<endl;
	cout<<"Precio de venta :"<<p1->precio_venta <<endl;
	
	do{
		system("cls");
		cout<<"**************Tienda**************"<<endl;
		cout<< "1) Agregar producto: "<<endl;
		cout<< "2) Retirar producto: "<<endl;
		cout<< "3) Consultar existencias: "<<endl;
		cout<< "4) Salir"<<endl;
		cout<< " Seleccione una opcion: ";
		cin>>op2;
		int cant;
		switch(op2){
			case 1:
				cout << "Digite la cantidad a agregar: "; cin>>cant;
				p1->ingresar(cant);
				cout<<endl;
				cout<<" PRODUCTO AGREGADO"<<endl;
				break;
			case 2:
				cout << "Digite la cantidad a retirar: "; cin>>cant;
				p1->retirar(cant);
				cout<<endl;
				cout<<" PRODUCTO RETIRADO"<<endl;
				break;
			case 3:
				cout << " Cantidad de producto en existencia: "<< p1->consultar();
				break;
			default: 
				cout<<"TIENDA CERRADA, LO ESPERAMOS NUEVAMENTE";
		}
		cout<<endl;		
		
		system("pause");
	}while( op2!=4); {
	} */

// Clase Rectangulo
/*
	Rectangulo *r1 = new Rectangulo(3, 4);
	cout << "El ancho es: "<< r1->ancho <<endl;
	cout << "El largo es: "<< r1->largo <<endl;
	r1->area();
	cout<<endl;
	r1->perimetro();
	cout<<endl;
	r1->diagonal();
	cout<<endl;
*/

// Clase Tanque
/*
	Tanque *t1 = new Tanque();
	
	cout << "Cantidad de agua existente: " << t1->getCantidadAgua() << endl;
		int op3;
		do{
			
		system("cls");
		cout<< "1) Agregar agua al tanque: "<<endl;
		cout<< "2) Quitar agua del tanque "<<endl;	
		cout<< "3) Consultar cantidad de agua "<<endl;
		cout<< "4) Salir "<<endl;
		cout<< " Seleccione una opcion: ";
		cin>>op3;	
		cout<<endl;
		switch(op3){
			case 1:
				float cant1;
				cout << "Ingrese la cantidad: ";
				cin>>cant1;
				t1->setAgregar(cant1); 
				cout<< "Cantidad Agregada";
				break;
			case 2:
				float cant2;
				cout << "Ingrese la cantidad: ";
				cin>>cant2;
				t1->setQuitar(cant2); 
				cout<< "Cantidad Eliminada";
				break;
			case 3:
				cout << " La cantidad actual de agua es: " << t1->getCantidadAgua() << " litros"; cout<<endl;
				break;
			default: 
				cout<<"Sesion finalizada";
		}
		cout<<endl;
		cout<<endl;
		system("pause");
	}while(op3 != 4);{
		
	}
	*/
	
	return 123;
}
