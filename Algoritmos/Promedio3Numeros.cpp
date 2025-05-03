#include<iostream>
#include<time.h>

using namespace std;

int main(){
	
	srand(time(NULL));
	
	string a, b, c;
	
	cout << "Digite el primer numero :" ;
		getline(cin,a);
	cout << "Digite el primer numero :" ;
		getline(cin,b);
	cout << "Digite el primer numero :" ;
		getline(cin,c);
		
	cout<<endl;

	
	try{
		// codigo propenso a fallar
		double doble1 = stod(a);
		double doble2 = stod(b);
		double doble3 = stod(c);
		
		double total = (doble1 + doble2 + doble3) / 3;
		
		cout << endl;
		
		cout <<" El promedio es: " << total;
		
	}catch(exception ex){
		// lo que sucede en caso de falla
		cout <<"!!!!!! Alguno de los valores predeterminados no es correcto !!!!!!"<< endl;
	} 
	
	return 0;
}
