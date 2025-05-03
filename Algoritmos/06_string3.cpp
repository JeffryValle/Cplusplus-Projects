#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	// transformar una cadena mayus./minusc.
	
	string str, str2, copia, copia2;
	cout<< "Digitar cadena1 : ";
	getline(cin, str); 
	copia = str;
	cout<< "Digitar cadena2 : ";
	getline(cin, str2); 
	copia2 = str2;
	//aplicar la transformacion a mayusculas
	// IMPORTANTE: transform altera la cadena original
	// clases enumerables
/*	transform(str.begin(), str.end(),str.begin(), ::toupper);
	cout << str << endl;
	cout << copia << endl;   */
	
	cout<< " Cadena 1: "<<str<<endl;
	cout<< " Cadena 2: "<<str2<<endl;
	
	return 333;
}
