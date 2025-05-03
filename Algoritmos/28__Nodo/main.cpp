#include<iostream>
#include<algorithm>
#include "ListaSimpleOptimizada.h"

using namespace std;

int main(){
	
	ListaSimpleOptimizada *l1 = new ListaSimpleOptimizada();
	ListaSimpleOptimizada *l2 = new ListaSimpleOptimizada();

	l1->push("Huevos");
	l1->push("Frijoles");
	l1->push("Aguacate");
	l1->push("Leche");
	l1->push("Gaseosa");
	l1->push("Pan Integral");
	l1->push("Papel Higienico");
	l1->push("Manzana");
	l1->push("Harina de trigo");
	
	
	l1->print();
	
	cout<<endl;
	int producto, borrar, op;
	string valor, valor2;
	while(op!=4){
	system("cls");
	cout<< "************* BIENVENIDO A PULPERIA SULA *************"<<endl;
	cout<< " Nuestros productos: "<<endl;
	cout<<"\t 1)Huevos  \t\t  2)Frijoles"<<endl;
	cout<<"\t 3)Aguacate  \t\t  4)Leche"<<endl;
	cout<<"\t 5)Gaseosa  \t\t  6)Pan Integral"<<endl;
	cout<<"\t 7)Papel Higienico  \t  8)Manzana"<<endl;
	cout<<"\t 9)Harina de trigo"<<endl;
	
	cout << "********************** Menu de Opciones **********************"<<endl;
	cout << "1) Agregar producto al carrito de compra "<<endl; 
	cout << "2) Mostrar carrito de compra "<<endl;
	cout << "3) Borrar producto del carrito de compra"<<endl;
	cout << "4) SALIR DE TIENDA "<<endl;
	cout << "Ingrese una opcion: ";
	cin>>op;
	cout<<endl;
	if(op == 1){
		cout<<"Ingrese el codigo del producto a agregar: ";
		cin>>producto;
		valor = l1->get(producto); 
		l2->push(valor); 
		cout <<"\t"<< valor << endl;
		cout<< " AGREGADO EXISTOSAMENTE ";
		cout<<endl;
	}
	if(op == 2){
		if(l2->getLength() > 0 ){
		cout << " Carrito : "<<endl;
		l2->print();
		} else {
			throw invalid_argument("***** CARRITO VACIO ******");
		}
	}
	if(op == 3){
		if(l2->getLength() == 0){
			throw invalid_argument("NO TIENE PRODUCTOS AGREGADOS AL CARRITO");
		} else {
		l2->print();
		cout<<endl;
		cout << "Seleccione producto a eliminar: "<<endl;
		cin >> borrar;
			valor2 = l2->get(borrar);
			cout << endl;
			cout << valor2 << endl;
			l2->pop(borrar);
			cout << "ELIMINADO EXITOSAMENTE";
			cout << endl;
		}
	}
	if(op == 4){
		cout << endl;
		cout << "MUCHAS GRACIAS POR PREFERIRNOS, ESPERAMOS PODER ATENDERLE NUEVAMENTE";
		cout << endl;
	}
	
	system("pause");
	}
	
	return 1999;
}
