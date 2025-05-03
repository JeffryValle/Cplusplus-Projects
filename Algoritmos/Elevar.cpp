#include <iostream>

using namespace std;

int elevar(int base, int potencia){
	
	int op = base;
	while( potencia > 1){
		op = op * base;
		potencia--;
	}
	
	cout << endl;
	cout << "El resultado es: " << op << endl;	
	return op;
}


int main(){
	
	elevar(2,4);
	
	system("pause");
	system("cls");

	return 1999;
}
