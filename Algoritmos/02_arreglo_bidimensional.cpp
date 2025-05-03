#include<iostream>
#include<ctime>

using namespace std;

int main(){
	
	srand(time(NULL));
	
	int arreglo[4][5] = {
		{5,7,8,9,0},
		{3,3,4,-5,1},
		{1,2,3,4,5},
		{5,4,3,7,10}	
	};
	cout << arreglo[1][3] << endl;
	
	int filas = end( arreglo )- begin( arreglo );
	cout << "Filas: "<< filas << endl;
	int columnas = end(arreglo[0])-begin(arreglo[0]);
	cout << "Columnas: "<< columnas << endl;
	
	// Un arreglo bidimensional es una coleccion de apuntadores
	// hacia otros arreglos secundarios
	
	for(int i=0; i<filas; i++)
	{
		for(int j=0; j<columnas; j++)
		{
			cout << arreglo[i][j]<< "\t";
		}
		cout<< endl;
	}
	
	cout<<"**************************************************"<<endl;
	
	int arreglo2[8][5];
	
	
	for(int m=0; m<8; m++)
	{
		for(int n=0; n<5; n++)
		{
		arreglo2[m][n] = rand()%(211-13+1)+13;
		}
	}
		
		
	for(int m=0; m<8; m++)
	{
		for(int n=0; n<5; n++)
		{
		cout <<arreglo2[m][n]<< "\t";
		}
		cout<<endl;
	}
		
		
		
		
		
	return 321;
}
