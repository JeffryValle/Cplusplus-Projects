#include<iostream>
#include<algorithm>

using namespace std;
// Prototipo
void mayusculas(string *str);
void cambiarEspacios(string *cadena);


int main(){
	/* Apuntadores cuando usamos objetos o estructuras
	1. En la declaracion de la funcion se coloca el simbolo apuntador* 
	en el parametro como lo haciamos con los tipos de datos primitivos
	2. Cuando usamos la variable en el ambito externo usamos el apuntador *
	para referirnos a ella, como lo haciamos con los tipos de datos primitivos.
	3. No es posible tener acceso a los miembros del objeto o estructura desde 
	el ambito externo; pero se puede un bypass o paso del objeto.
	4. Cuando se manda a utilizar la funcion y envia la variable apuntada
	esta se envia usando & (amperson) como lo haciamos con los tipos de dato primitivos.

	*/
	string n = "Hola mundo";
	cout << "********Antes*******" <<endl;
	cout << n << endl;
	cout << "********Despues*******" <<endl;
	cambiarEspacios(&n);
	cout << n << endl;
	cout << endl;
	cout << "********Antes*******" <<endl;
	string x = "Hola mundo";
	cout << x << endl;
	mayusculas(&x);
	cout << "********Despues*******" <<endl;
	cout << x << endl;
	return 1999;
}

// funcion void que convierte a mayusculas el string que le enviemos

void mayusculas(string *str){
	// hacer una copia local con el valor del apuntador
	string copia = *str;
	// pasar la copia local a mayusculas
	transform(copia.begin(), copia.end(), copia.begin(), ::toupper);
	// una vez alterada la copia, sobreeescribimos el valor de la variable apuntada
	// la cual va a conservar su direccion de memoria.
	*str = copia;
}

/* Hacer una funcion void que reciba un string apuntado y le sustituya los espacios
	en blanco por guiones bajos*/
void cambiarEspacios(string *cadena){
	string copia = *cadena;
	
	for(int i = 0; i < copia.length();i++)
		if(copia[i] == ' '){
			copia[i] = '_';
		}
	*cadena = copia;
}
/*  El ampersand es un operador de C++ y es comúnmente utilizado para los punteros. 
	Este operador nos permite obtener la dirección de memoria de una variable cualquiera
	y es justo esto (la dirección en memoria) lo que utilizan los punteros para 
	referenciar valores.*/




