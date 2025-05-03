#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	
// Ejercicio Práctico 2:	
	
	string arreglo[8][5];
	int a, b, n=0;

cout<<endl;
	while(n<1){

	cout << "Ingrese el valor de 'a': ";
	cin>>a;
	cout << "Ingrese el valor de 'b': ";
	cin>>b;
	
	if(b>a){
		for(int i = 0; i < 8 ; i++){
			for(int j=0; j < 5; j++){
				cout <<" "<< rand()%(b-a+1)+a;
			}
			cout <<" \t " << endl;
			}
		n++;
	} else {
		cout << "El valor de b debe ser mayor que a";
	}
	
	cout << endl;
	
}

	return 1999;
}
