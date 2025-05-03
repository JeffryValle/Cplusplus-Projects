#include<iostream>
#include<iomanip>
#define _USE_MATH_DEFINES
#include<cmath>
#include<time.h>


using namespace std;	

// propotipo de funcion
double areaCirculo(double radio);
float areaCirculo(float radio);

int minimo(int n1, int n2, int n3);
double minimo(double n1, double n2, double n3);
float minimo(float n1, float n2, float n3);
int numeroAleatorio(int min, int max);
bool Texto(string str);
int esfind(string s, char caracter);
int buscarArreglo(string buscar, string a[], int items);

// setprecision : imprime la cantidad de digitos. No redondea


int main(){
	
	srand(time(NULL));
	double r1 = 2.45;
	float r2 = 2.165131516113165;
	
	cout << "El area del circulo es: " << areaCirculo(r1) << endl;
	cout << "E:l area del circulo es: " << areaCirculo(r2) << endl;
	cout << endl;
	
	for(int i=1; i<=3; i++)
	cout << "numero aleaatorio" << numeroAleatorio(5, 10) << endl;

	cout << Texto("Hola mundo");
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	 
	cout << "Posicion: " << esfind("Hola mundo", 'a') << endl;
	
	cout<<endl;
	
		string a[] = {
	"uva",
	"manzana",
	"sandia",
	"melon",
	"aguacate",
	"limon"	};
	
	int item = 
	cout<<"************************************"<<endl;
	cout << "Posicion: " << buscarArreglo("manzana", a, end) <<endl;

	return 564;
}

double areaCirculo(double radio){
	return M_PI * (radio*radio);
}

float areaCirculo(float radio){
	return M_PI * (radio*radio);
}


int minimo(int n1, int n2, int n3){
	if( n1 < n2 && n1 < n3) return n1;
	if( n2 < n1 && n2 < n3) return n2;
	if( n3 < n2 && n3 < n1) return n3;
}

int numeroAleatorio(int min, int max){
	int Number;
	for(int i=1; i<=10; i++){
	Number = rand()%(max-min+1)+min;	
	}
	
	return Number;
}

bool Texto(string str){

}

int esfind(string s, char caracter){
	
	for(int i=0; i<s.length(); i++){
		if(s[i] == caracter){
			return i;
		}
	}
	return -1;
}


int buscarArreglo(string buscar, string a[], int items){

	
	for(int i=0; i<items; i++){
		if( buscar == a[i]){
			return i;
		}
	}
	return -1;
}



























