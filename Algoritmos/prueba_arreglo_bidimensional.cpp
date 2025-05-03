#include<iostream>

using namespace std;

int main(){


    string arreglo[3][3];
    int n=0,x,y;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arreglo[i][j]="-";
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arreglo[i][j];
        }
        cout << endl;
    } 
    
}
