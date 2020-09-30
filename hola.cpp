#include<iostream>

using namespace std;

int main() {
    int x,a,b,aa,bb ;
int datos[200],aux,num[200];
int i,j;
	cout << "ingese numero de  datos " << endl;
	cin>>x;
	for( i=0 ;i<x;i++){
	    cin>>datos[i];
	}
	for( i=0 ;i<x;i++){

   for( j=0 ;j<x;j++){

 if (datos[i]<datos[j]){

    aux=datos[i];
 datos[i]=datos[j];
  datos[j]=aux;
 }
 }
 }

cout<< "numeros ordenados";

	for( i=0 ;i<x;i++){

            cout<<datos[i];
            }

return 0 ;
    }
