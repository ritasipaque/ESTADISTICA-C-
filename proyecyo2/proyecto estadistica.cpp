#include<iostream>
#include<stdlib.h>
using namespace std;

  //funciones  de  estructura//
void ordenar (){
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

}
void agrupados (){}
void no_agrupados (){}
void m_m_m (){}
void tabla (){}
void histograma (){}
int  main (){
    //menu principal//
int menu;

        cout << "Bienvenido " << endl;
           cout << "Seleccione una opcion " << endl;
             cout << "\t" << endl;
        cout << "ingreso  de   datos  agrupados...........1 " << endl;
		cout << "ingreso  de   datos no agrupados.........2" << endl;
		cout << "media , mediana  ,moda...................3" << endl;
		cout << "tabla  de  datos.........................4" << endl;
		cout << "histograma...............................5" << endl;
		cout << "selecciona" << endl;
			cin >> menu;
			system("cls");
		  //case  de seleccion//
		switch (menu)
		{
		case 1:
agrupados();
			break;

		case 2:
no_agrupados();
			break;
		case 3:
m_m_m();
			break;

		case 4:
tabla();
			break;

		case 5:
histograma();
			break;
system("pause");
return 0;
}
}
