#include<iostream>
#include<algorithm>

using namespace std;

int main(){

// Ejercicio Práctico 1:

	string str;
	string cadena;
	int cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0, cont7=0;
	
	cout << "Digite una cadena: ";
	getline(cin,str);

	transform(str.begin(), str.end(), str.begin(), ::tolower);
	cadena = str;
	
	for(int i = 0; i < end(str)-begin(str); i++){
		if(cadena[i]=='b'){cont1++;}
		else if(cadena[i]=='c'){cont2++;}
		else if(cadena[i]=='d'){cont3++;}
		else if(cadena[i]=='f'){cont4++;}
		else if(cadena[i]=='s'){cont5++;}
		else if(cadena[i]=='r'){cont6++;}
		else if(cadena[i]=='k'){cont7++;}		
	}
		cout << endl;
	cout << "Letra \t Cantidad" << endl;
	cout << "b  \t" << cont1 <<endl;		cout << "c  \t" << cont2 <<endl;
	cout << "d  \t" << cont3 <<endl;		cout << "f  \t" << cont4 <<endl;
	cout << "s  \t" << cont5 <<endl;		cout << "r  \t" << cont6 <<endl;
	cout << "k  \t" << cont7 <<endl;	
	
	return 1999;
}
