#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

double hipotenusa(double a, double b){
	
	double op;
	
	op = (a*a)+(b*b);
	
	cout << endl;
	cout << "El resultado es: " << pow(op, 0.5) << endl;	
	return op;
}


int main(){
	
	hipotenusa(3,4);
	hipotenusa(4,5);
	hipotenusa(4,6);
	
	cout << endl;
	
	system("pause");
	system("cls");

	return 1999;
}
