#include<iostream>

using namespace std;

int main(){
	
	string str;
	
	/* Leer una cadena de texto y posteriormente imprimirla
	dejando tres espacios en blanco entre cada caracter. Ejemplo:
	Digitar cadea: UNAH
	Resultado:
	U   N   A   H */
	
	cout<<"Digitar cadena: ";
	getline(cin, str);
	
	for(int i=0; i<str.length(); i++){
		cout<< str[i] << "   ";
	}
	cout << endl;
	
	string str2;
	cout<<" Digitar nueva cadena: ";
	getline(cin, str2);
	
	for(int j=0; j<str.length(); j++){
		cout << str2[j] << "   ";
	}
	cout << endl;
	
	
}
