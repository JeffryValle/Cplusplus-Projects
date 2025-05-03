#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	
	//Buscar un string dentro de otro string
	string str = "El veloz murcielago hindu comia cardillo y kiwi";
	
	string buscar;
	cout << "Digite el texto que desea buscar: ";
	getline(cin,buscar);
	
	// para buscar en un string utilizamos find
	// find nos devuelve -1 si no encontró nada, de lo contrario
	// nos va a devolver la posicion donde encontro lo buscado
	int texto = str.find(buscar, 0);
	int cont=0;
	/* donde
	str:  		es el string dentro del cual vamos a buscar
	buscar: 	es el string a buscar 
	0 			es la posicion desde donde vamos a comenzar a buscar
				CERO quiere decir que se comienza a buscar desde el primer char. */

	for(int i=0; i<str.length(); i++){
		cout<<str[i];
		if(buscar[i]==str[i]){
			cont++;
		}
	}
	cout << endl;
	cout << "Se encontro "<<cont<<" veces"<<endl;
	
	cout << endl;
	return 111;	
}
