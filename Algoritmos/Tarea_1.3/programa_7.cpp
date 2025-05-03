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
	
	cout << "Ingrese una cadena: ";
	getline(cin,cadena);
	
	transform(cadena.begin(), cadena.end(), cadena.begin(), ::toupper);
	for(int i = end(cadena)-begin(cadena); i >=0 ; i--){
		cout << cadena[i] ;
	}
	
	return 1999;
}
	
