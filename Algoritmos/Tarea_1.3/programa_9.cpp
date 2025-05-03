#include<iostream>

using namespace std;

int main(){

	cout<<"******************************"<<endl;
	cout<<"***  Jeffry Espinal Valle  ***" << endl;
	cout<<"***       20212000761      ***" << endl;
	cout<<"******************************"<<endl;
	cout << endl;

    
    /*				  'Y'
	  			 1	 2	 3	
			 1   -   -   -
		'X'	 2   -   -   -
			 3   -   -   -
			 
	Estructura para identificar las coordenadas donde se elegirá la posición. Ejemplo:
	
	Turno de las X
	Coordenada en X: 3
	Coordenada en Y: 1
	
    				  'Y'
	  			 1	 2	 3	
			 1   -   -   -
		'X'	 2   -   -   -
			 3   X   -   -
	
	*/
    
    string arreglo[3][3];
    int n=0,x,y;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arreglo[i][j]="-";
        }
    }
    
    while(n>=0 && n<9){
        n++;
        cout<<"\t1\t2\t3\n1\t"<<arreglo[0][0]<<"\t"<<arreglo[0][1]<<"\t"<<arreglo[0][2]
            <<"\n2\t"<<arreglo[1][0]<<"\t"<<arreglo[1][1]<<"\t"<<arreglo[1][2]
            <<"\n3\t"<<arreglo[2][0]<<"\t"<<arreglo[2][1]<<"\t"<<arreglo[2][2];
        
        while(n%2!=0){
            cout<<"\n\nTurno de las X\n"<<"Ingrese posicion X: ";
            cin>>x;
            cout<<"Ingrese posicion Y: ";
            cin>>y;
            if(x==-1 || y==-1)
                n=-1;
            if(n==-1){
                cout<<"\n       Juego finalizado\n";
                break;
            }
            else if(x<1 || x>3 || y<1 || y>3){
                cout<<"\nIngrese una coordenada valida\n";
            }
            else if(arreglo[x-1][y-1] != "-"){
                cout<<"\nCoordenada ocupada ingrese otra\n";
            }
            else{
                arreglo[x-1][y-1]="X";
                break;
            }
        }
        
        while(n%2==0){
            cout<<"\n\nTurno de los 0\n"<<"Ingrese posicion X: ";
            cin>>x;
            cout<<"Ingrese posicion Y: ";
            cin>>y;
            if(x==-1 || y==-1)
                n=-1;
            
            if(n!=-1 && (x<1 || x>3 || y<1 || y>3)){
                cout<<"\nIngrese una coordenada valida\n";
            }
            else if(arreglo[x-1][y-1] != "-"){
                cout<<"\nCoordenada ocupada ingrese otra\n";
            }
            else{
                arreglo[x-1][y-1]="0";
                break;
            }
        }
        
    // Formas de ganar siendo las 'X'    
        if((arreglo[0][0]=="X" && arreglo[0][1]=="X" && arreglo[0][2]=="X") || (arreglo[1][0]=="X" && arreglo[1][1]=="X" && arreglo[1][2]=="X") ||
           (arreglo[2][0]=="X" && arreglo[2][1]=="X" && arreglo[2][2]=="X") || (arreglo[0][0]=="X" && arreglo[1][0]=="X" && arreglo[2][0]=="X") || 
		   (arreglo[0][1]=="X" && arreglo[1][1]=="X" && arreglo[2][1]=="X") || (arreglo[0][2]=="X" && arreglo[1][2]=="X" && arreglo[2][2]=="X") || 
		   (arreglo[0][0]=="X" && arreglo[1][1]=="X" && arreglo[2][2]=="X") || (arreglo[0][2]=="X" && arreglo[1][1]=="X" && arreglo[2][0]=="X")){
            cout<<"\n   JUEGO FINALIZADO, GANAN LAS 'X'\n\n";
            cout<<"\t1\t2\t3\n1\t"<<arreglo[0][0]<<"\t"<<arreglo[0][1]<<"\t"<<arreglo[0][2]
                <<"\n2\t"<<arreglo[1][0]<<"\t"<<arreglo[1][1]<<"\t"<<arreglo[1][2]
                <<"\n3\t"<<arreglo[2][0]<<"\t"<<arreglo[2][1]<<"\t"<<arreglo[2][2]<<"\n";
            break;
        }
        
    // Formas de ganar siendo las 'Y'    
        if((arreglo[0][0]=="0" && arreglo[0][1]=="0" && arreglo[0][2]=="0") ||
           (arreglo[1][0]=="0" && arreglo[1][1]=="0" && arreglo[1][2]=="0") ||
           (arreglo[2][0]=="0" && arreglo[2][1]=="0" && arreglo[2][2]=="0") ||
           (arreglo[0][0]=="0" && arreglo[1][0]=="0" && arreglo[2][0]=="0") ||
           (arreglo[0][1]=="0" && arreglo[1][1]=="0" && arreglo[2][1]=="0") ||
           (arreglo[0][2]=="0" && arreglo[1][2]=="0" && arreglo[2][2]=="0") ||
           (arreglo[0][0]=="0" && arreglo[1][1]=="0" && arreglo[2][2]=="0") ||
           (arreglo[0][2]=="0" && arreglo[1][1]=="0" && arreglo[2][0]=="0")){
            cout<<"\n   JUEGO FINALIZADO, GANAN LAS 'Y'\n\n";
            cout<<"\t1\t2\t3\n1\t"<<arreglo[0][0]<<"\t"<<arreglo[0][1]<<"\t"<<arreglo[0][2]
                <<"\n2\t"<<arreglo[1][0]<<"\t"<<arreglo[1][1]<<"\t"<<arreglo[1][2]
                <<"\n3\t"<<arreglo[2][0]<<"\t"<<arreglo[2][1]<<"\t"<<arreglo[2][2]<<"\n";
            break;
        }
    // En caso de nadie ganar 
        if(n==9){
            cout<<"\n   Fue empate!!\n\n";
            cout<<"\t1\t2\t3\n1\t"<<arreglo[0][0]<<"\t"<<arreglo[0][1]<<"\t"<<arreglo[0][2]
                <<"\n2\t"<<arreglo[1][0]<<"\t"<<arreglo[1][1]<<"\t"<<arreglo[1][2]
                <<"\n3\t"<<arreglo[2][0]<<"\t"<<arreglo[2][1]<<"\t"<<arreglo[2][2]<<"\n";
            break;
        }
        cout<<"\n************************************************************\n\n";
    }
    return 1;
}

