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
	int cont=1;
	
	cout << "Ingrese una cadena de texto: ";
	getline(cin,cadena);
	
	cout << endl;
	
	for(int i = 0; i < end(cadena)-begin(cadena); i++){
		str = cadena[i];
		if(str == " " ){
		cont++;
		}
	}
	
	cout << "La cadena tiene " << cont << " palabras" << endl; 
	
	
	return 1999;
}
