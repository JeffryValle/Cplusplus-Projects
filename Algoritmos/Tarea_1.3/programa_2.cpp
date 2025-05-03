#include<iostream>
#include<algorithm>


using namespace std;

int main(){
	
	cout<<"******************************"<<endl;
	cout<<"***  Jeffry Espinal Valle  ***" << endl;
	cout<<"***       20212000761      ***" << endl;
	cout<<"******************************"<<endl;
	cout << endl;
	
	int cont=0;
	string nombreFruta;
	string copianombreFruta;
	string frutas[20] = {
        "mango", "banana", "naranja", "uva", "pera",
        "kiwi", "fresa", "piña", "papaya", "sandia",
        "melon", "cereza", "aguacate", "coco", "granada",
        "melocoton", "limón", "frambuesa", "guayaba", "ciruela"
    };
      
    cout<<endl;
    cout<<endl;
    cout << "Ingrese una fruta: ";
    getline(cin,nombreFruta);
    
    transform(nombreFruta.begin(), nombreFruta.end(), nombreFruta.begin(), ::tolower);

	for(int i = 0; i < end(frutas)-begin(frutas); i++){
		if(frutas[i] == nombreFruta){
			cont++;
		}
	}
	if(cont>=1){
		cout << "La fruta se encontro" ;
	} else {
		cout << "La fruta NO se encontro" ;
	}
	
	cout<<endl;
	
	return 1999;
}
