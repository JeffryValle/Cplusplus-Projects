#include<iostream>
#include<algorithm>


using namespace std;

int main(){
	
	cout<<"******************************"<<endl;
	cout<<"***  Jeffry Espinal Valle  ***" << endl;
	cout<<"***       20212000761      ***" << endl;
	cout<<"******************************"<<endl;
	cout << endl;	
	
	string cadena;
	string str;
	
	cout << "Ingrese una cadena: ";
	getline(cin,cadena);
	
	for(int i = 0; i < end(cadena)-begin(cadena); i++){
		str = cadena[i];
		if(str == " " ){
		cadena[i]='*';
		}
	}
	
	cout << endl;
	cout << "La nueva cadena es: ";
	
	for(int i = 0; i < end(cadena)-begin(cadena); i++){
		cout << cadena[i];
	}
	return 1999;
}
