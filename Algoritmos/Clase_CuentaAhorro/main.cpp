#include<iostream>
#include "CuentaAhorro.h"
#include <stdexcept>

using namespace std;

int main(){
	int op = 0, dinero;
	
	CuentaAhorro *c1 = new CuentaAhorro("Jeffry");
	
	while(op<3){
				cout<<endl;
		cout << "*********** Cuenta de Ahorro ***********" <<endl;
		cout << "Nombre del Cliente: " << c1->cliente <<endl; 
		cout << "1) Depositar " << endl;
		cout << "2) Retirar " << endl;
		cout << "3) Salir " << endl;
		cout << "Elija una opcion: ";
		cin >> op;
		cout<<endl;
			switch(op){
			case 1:
				cout << "*********** Deposito ***********" <<endl;	
				cout<<"Ingrese la cantidad a depositar: ";
				cin>>dinero;
				
					c1->depositar(dinero);
					cout << "*********** Dinero en cuenta ***********" <<endl;
					cout << "El saldo actual es: " << c1->getSaldo();
					cout<<endl;					
				
			
			break;
				cout<<endl;
			case 2: 
				cout << "*********** Retiro ***********" <<endl;
				cout<<"Ingrese la cantidad a retirar: "<<endl;
				cin>>dinero;
				c1->retirar(dinero);
				cout << "*********** Dinero en cuenta ***********" <<endl;
				cout << "El saldo actual es: " << c1->getSaldo();
				cout<<endl;				
			break;
				cout<<endl;
			case 3:
				cout<<"¡Retire su tarjeta!"; exit(-1);
			break;
			}
		}
			cout << endl;
			cout << endl;
	return 0;
}
