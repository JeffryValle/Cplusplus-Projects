#include<iostream>
#include<cmath>

using namespace std;

void elevar(double base, double potencia);
void partir(float numero);

int main(){
	
	double x=5;
	float z=7;
	cout << " Antes de elevar: " << x;
	
	
	partir(&z);
	cout << endl;
	cout << " Partido " << z ;
	
	return 1999;
}

void elevar(double *base, double potencia){
	
	*base = pow(*base, potencia);
}

void partir(float *numero){
	*numero = *numero / 2;
}

