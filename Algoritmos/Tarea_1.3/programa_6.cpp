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
	string str;
	string str2;
	
	cout << "Ingrese una cadena: ";
	getline(cin,cadena);
	
	for(int i = 0; i < end(cadena)-begin(cadena); i++){
		str = cadena[i];
		str2 = cadena[i+1];
		if(str == " " && str2!=" "){
			cout<<str2;
		}
		if(i==0 && str!=" ")
		cout << cadena[i];
	}	

	
	return 1999;

}
