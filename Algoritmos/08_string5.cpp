#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	
	int x;
	string str;
	
	cout<<"Digite un numero para el valor de x: ";
	cin>>x;
	
	cout<<"Digite un string para str: ";
	//vaciar el buffer de entrada
	cin.ignore();
	getline(cin, str);
	
	cout << "Gracias, adios" << endl;
	
	
	return 456;
}
