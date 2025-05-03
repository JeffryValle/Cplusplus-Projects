#include<iostream>
#include<time.h>
#include<fstream>


using namespace std;

int main(){
	
	cout<<"******************************"<<endl;
	cout<<"***  Jeffry Espinal Valle  ***" << endl;
	cout<<"***       20212000761      ***" << endl;
	cout<<"******************************"<<endl;
	cout << endl;
	
	srand(time(NULL));

	fstream archivo;
	
	archivo.open("2000_Numeros.txt", ios::out );
	
	if( archivo.is_open()){
		cout << "El archivo se abrio correctamente" <<endl;
		cout << "Datos Insertados Correctamente" <<endl;		
		
		for(int i = 1; i<=2000; i++){
		archivo <<i <<") "<< rand()%(85-5+1)+5 <<endl;
		}
		
	} else { 
		cout << "El archivo No se abrio correctamente" <<endl; }
	
	
	return 1999;
}
	
