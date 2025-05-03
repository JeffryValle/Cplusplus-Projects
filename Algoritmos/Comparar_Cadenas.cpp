#include<iostream>

using namespace std;

// Prototipado

bool Texto(string s);

int main(){
	
	cout << Texto("Esto es una cadena de texto") << endl;
	return 123;
}
bool Texto(string s){
	string cadena;
	
	for(int i=0; i<cadena.length(); i++){cadena[i] = toupper(cadena[i]);}
		if( s == cadena ){
			return true;
		} else {
		return false;
		}
}


