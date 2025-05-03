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
	int contA=0,contE=0,contI=0,contO=0,contU=0;
	
	cout << "Ingrese una cadena de texto: ";
	getline(cin,cadena);
	
	cout << endl;
	
	transform(cadena.begin(), cadena.end(), cadena.begin(), ::tolower);
	
	for(int i = 0; i < end(cadena)-begin(cadena); i++){
		str = cadena[i];
		if(str == "a" ){
		contA++;
		}
		else if(str == "e" ){
		contE++;
		}
		else if(str == "i" ){
		contI++;
		}
		else if(str == "o" ){
		contO++;
		}
		else if(str == "u" ){
		contU++;
		}
	}
	
	cout << "Vocal \t Cantidad "<<endl;
	cout << "a \t    "<<contA<<endl;
	cout << "e \t    "<<contE<<endl;
	cout << "i \t    "<<contI<<endl;
	cout << "o \t    "<<contO<<endl;
	cout << "u \t    "<<contU<<endl;
	
	
	return 0;
}
