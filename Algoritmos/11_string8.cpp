#include<iostream>
#include<algorithm>
#include<iomanip> // para poder usar setprecision

using namespace std;

int main(){
	// Conversiones 
	// Entero a String
	string str = "14.9";
	int entero1 = stoi(str);
	cout << "string :" << str << endl;
	cout << "entero :" << entero1 << endl;
	cout << endl;
	
	// Float a string
	str = "3.14444";
	float float1 = stof(str);
	cout << "string :" << str << endl;
	cout << "float :" << float1 << endl;	
	cout << endl;
	
	// Double a string
	str = "22.78978979879";
	double doble1 = stod(str);
	cout << "string :" << str << endl;
	cout << "double :" << doble1 << endl;
	cout << endl;
	
	// de numero a string
	int entero2 = 45;
	float float2 = 2.556;
	double doble2 = 4.898989787;
	
	string str2 = to_string(entero2), str3 = to_string(float2), str4 = to_string(doble2);
	
	
	return 0;
}
