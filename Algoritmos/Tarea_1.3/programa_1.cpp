#include<iostream>
#include<algorithm>


using namespace std;

int main(){
	
	cout<<"******************************"<<endl;
	cout<<"***  Jeffry Espinal Valle  ***" << endl;
	cout<<"***       20212000761      ***" << endl;
	cout<<"******************************"<<endl;
	cout << endl;

	string cadena[10], nombre;
	int i=1;

	while(i<11){
		cout << "Ingrese un nombre: ";
		getline(cin,cadena[i]);
		if(cadena[i]==""){
			continue;
		} else {
			i++;
		}
	}
	
	cout << endl;
	cout << "******************** Arreglo Insertado ********************" << endl;
	cout << endl;
	
	
	for(int i=1; i<=10; i++){
		cout << "Nombre " << i << ": " << cadena[i] << endl;
	}
	
	return 1999;
}
